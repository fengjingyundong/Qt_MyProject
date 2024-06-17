#include "serialcommunication.h"
#include "ui_serialcommunication.h"

void SerialCommunication::serial_Init()
{
    /* 扫描系统串口 */
    // QList<QSerialPortInfo> serialList;
    serialList = QSerialPortInfo::availablePorts(); /* 得到安装的 串口 */
    QList<QSerialPortInfo>::Iterator i;
    for (i = serialList.begin(); i != serialList.end(); i++)
    {
        QString str = i->description();
        ui->cboxSerialNum->addItem(i->portName() + str);
    }

    /* 波特率 选项 */
    QList<QString> list;
    list << "1200" << "2400" << "4800" << "9600" << "19200" << "38400" << "57600" << "115200" << "230400" << "460800" << "921600";
    for (int j = 0; j < list.size(); j++)
    {
        // qDebug()<< list.at(x);
        ui->cboxSerialBaudRate->addItem(list[j]);
    }
    ui->cboxSerialBaudRate->setCurrentIndex(6);

    /* 数据位 */
    list.clear();
    list << "5" << "6" << "7" << "8";
    for (int j = 0; j < list.size(); j++)
    {
        ui->cboxSerialDataBits->addItem(list[j]);
    }
    ui->cboxSerialDataBits->setCurrentIndex(3);

    /* 校验位 */
    list.clear();
    list << "None" << "Even" << "Odd" << "Space" << "Mark";
    for (int i = 0; i < list.size(); i++)
    {
        ui->cboxSerialParityBit->addItem(list[i]);
    }

    /* 停止位 */
    list.clear();
    list << "1" << "2";
    for (int i = 0; i < list.size(); i++)
    {
        ui->cboxSerialStopBits->addItem(list[i]);
    }
}

/* 构造函数 */
SerialCommunication::SerialCommunication(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::SerialCommunication)
{
    ui->setupUi(this);

    crc = new CRC(this);

    serialPort = new QSerialPort(this);
    ui->btnSend->setEnabled(false);

    /* 串口初始化 */
    serial_Init();

    ui->textEditSend->insertPlainText("03 03 01 30 09 00");

    timer = new QTimer(this);

    connect(serialPort, SIGNAL(readyRead()), this, SLOT(serialPortReadyRead()));
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimeOut()));
}

/* 析构函数 */
SerialCommunication::~SerialCommunication()
{
    delete ui;
}

/* 退出程序 */
void SerialCommunication::on_actExit_triggered()
{
    this->close();
}

/* 打开串口 */
void SerialCommunication::on_btnOpenSerial_clicked()
{
    {
        QString str = ui->btnOpenSerial->text();
        if (str == "打开串口")
        {
            int index = ui->cboxSerialNum->currentIndex();
            QString name = serialList.at(index).portName();
            // qDebug()<<index<<" "<<name;

            serialPort->setPortName(name); /* 设置串口名称 */
            int baud = ui->cboxSerialBaudRate->currentText().toInt();
            // qDebug()<<"BaudRate: "<<baud;
            serialPort->setBaudRate(baud); /* 设置串口波特率 */

            /* 串口数据位 */
            int data = ui->cboxSerialDataBits->currentIndex();
            // qDebug()<<"DataBits: "<<data;
            switch (data)
            {
            case 0:
                serialPort->setDataBits(QSerialPort::Data7);
                break;

            case 1:
                serialPort->setDataBits(QSerialPort::Data8);
                break;
            default:
                break;
            }

            /* 串口奇偶校验 */
            int parity = ui->cboxSerialParityBit->currentIndex();
            // qDebug()<<"Parity: "<<parity;
            switch (parity)
            {
            case 0:
                serialPort->setParity(QSerialPort::NoParity);
                break;
            case 1:
                serialPort->setParity(QSerialPort::EvenParity);
                break;
            case 2:
                serialPort->setParity(QSerialPort::OddParity);
                break;
            default:
                break;
            }

            int stop = ui->cboxSerialStopBits->currentText().toInt();
            // qDebug()<<"Stop: "<<stop;
            switch (stop)
            {
            case 1:
                serialPort->setStopBits(QSerialPort::OneStop);
                break;
            case 2:
                serialPort->setStopBits(QSerialPort::TwoStop);
                break;
            default:
                break;
            }

            /* 设置流控制 */
            serialPort->setFlowControl(QSerialPort::NoFlowControl);

            /* 打开串口 */
            if (!serialPort->open(QIODevice::ReadWrite))
            {
                QMessageBox::about(this, "错误", "串口无法打开! 串口可能已经被占用 ");
            }
            else
            {
                ui->cboxSerialNum->setEnabled(false);
                ui->cboxSerialBaudRate->setEnabled(false);
                ui->cboxSerialDataBits->setEnabled(false);
                ui->cboxSerialParityBit->setEnabled(false);
                ui->cboxSerialStopBits->setEnabled(false);
                ui->btnSend->setEnabled(true);
                ui->btnOpenSerial->setText("关闭串口");
            }
        }
        else
        {
            serialPort->close(); /* 关闭串口 */

            timer->stop();

            ui->cboxSerialNum->setEnabled(true);
            ui->cboxSerialBaudRate->setEnabled(true);
            ui->cboxSerialDataBits->setEnabled(true);
            ui->cboxSerialParityBit->setEnabled(true);
            ui->cboxSerialStopBits->setEnabled(true);
            ui->btnSend->setEnabled(false);

            ui->btnOpenSerial->setText("打开串口");
        }
    }
}

/* 读取串口数据 */
void SerialCommunication::serialPortReadyRead()
{
    static uint32_t err = 0;
    uint16_t temp[9] = {0, 0, 0, 0};
    static QByteArray sumData;

    QByteArray recData = serialPort->readAll();
    if (recData.isEmpty())
        return;

    sumData.append(recData);

    if (sumData.length() < 25)
    {
        return;
    }

    uchar hard1 = sumData.at(0);
    uchar hard2 = sumData.at(1);
    if ((hard1 != 0xed) || (hard2 != 0xed))
    {
        ui->statusbar->showMessage("Rx Error!", 0);
        err++;
        return;
    }

    QString str = sumData.toHex();
    ui->textEditReceive->insertPlainText(str + "\r\n");
    // qDebug()<<"Len:"<<buf.length() <<"Data:"<< str;

    QString rxStr = sumData.toHex();
    rxStr = rxStr.toUpper();

    if (err > 0)
    {
        ui->statusbar->showMessage("Rx: " + rxStr + QString::asprintf("\t Err: %d", err), 0);
    }
    else
    {
        ui->statusbar->showMessage("Rx: " + rxStr, 0);
    }

    QTextCursor cursor = ui->textEditReceive->textCursor();
    cursor.movePosition(QTextCursor::End);
    ui->textEditReceive->setTextCursor(cursor); /* 光标移动到最后一行 */

        /* 计算AIN 通道数值 */
    // qDebug()<<"AIN1: "<<QString::asprintf("%X",(uchar)buf.at(6))<<" "<< QString::asprintf("%X",(uchar)sumData.at(5));
    for (int i = 0; i < 9; i++)
    {
        temp[i] = (sumData.at(i * 2 + 6) << 8) | (sumData.at(i * 2 + 5) & 0x00ff);
        // qDebug()<<QString::asprintf("Ain%d: %X",i, temp[i]);
    }

    ui->labelAin1->setNum(temp[0] / 8);
    ui->labelAin2->setNum(temp[1] / 8);
    ui->labelAin3->setNum(temp[2] / 8);
    ui->labelAin4->setNum(temp[3] / 8);
    ui->labelAin5->setNum(temp[4] / 8);
    ui->labelAin6->setNum(temp[5] / 8);
    ui->labelAin7->setNum(temp[6] / 8);
    ui->labelAin8->setNum(temp[7] / 8);
    ui->labelAin9->setNum(temp[8] / 8);

    sumData.clear();
}

/* 清除接收区数据 */
void SerialCommunication::on_actClearRx_triggered()
{
    ui->textEditReceive->clear(); /* 清除接收缓冲 */
}

/* 数据发送按键 */
void SerialCommunication::on_btnSend_clicked()
{
    QString str = ui->textEditSend->toPlainText();

    if (str.isEmpty())
    {
        QMessageBox::about(NULL, "错误", "发送栏空 !");
        return;
    }


    int delay = ui->spinBox->value();   /* 获取循环发送时间 */
    timer->start(delay);    /* 启动循环定时器 */

    QByteArray data = QByteArray::fromHex(str.toLatin1().data());
    int len = data.length();

    data.resize(len + 2); /* 增加 CRC 冗余字节空间 */
    uint16_t res = crc->app_Tab_Get_CRC16(&data, len);
    QByteArray hard = QByteArray::fromHex("fe fe");

    data.prepend(hard);
    len = data.length();

    data[len - 2] = (uchar)(res & 0xff);
    data[len - 1] = (uchar)(res >> 8) & 0xff;

    // qDebug()<<"Tx:"<<data.toHex();
    QString sta = data.toHex();
    sta = sta.toUpper();
    ui->statusbar->showMessage("Tx: " + sta, 0);
    serialPort->write(data);
}

/* 定时器 循环发送 */
void SerialCommunication::onTimeOut()
{
    QString str = ui->textEditSend->toPlainText();

    if (str.isEmpty())
    {
        QMessageBox::about(NULL, "错误", "发送栏空 !");
        return;
    }

    QByteArray data = QByteArray::fromHex(str.toLatin1().data());
    int len = data.length();

    data.resize(len + 2); /* 增加 CRC 冗余字节空间 */
    uint16_t res = crc->app_Tab_Get_CRC16(&data, len);
    QByteArray hard = QByteArray::fromHex("fe fe");

    data.prepend(hard);
    len = data.length();

    data[len - 2] = (uchar)(res & 0xff);
    data[len - 1] = (uchar)(res >> 8) & 0xff;

    qDebug() << "Tx:" << data.toHex();
    serialPort->write(data);
}
