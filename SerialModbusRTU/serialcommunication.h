#ifndef SERIALCOMMUNICATION_H
#define SERIALCOMMUNICATION_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QList>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include "crc.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class SerialCommunication;
}
QT_END_NAMESPACE

class SerialCommunication : public QMainWindow
{
    Q_OBJECT

private:
    QList<QSerialPortInfo> serialList;
    QSerialPort *serialPort;
    CRC *crc;
    QTimer *timer;

    void serial_Init();

public:
    SerialCommunication(QWidget *parent = nullptr);
    ~SerialCommunication();

private slots:
    void on_actExit_triggered();
    void on_btnOpenSerial_clicked();
    void serialPortReadyRead();         /* 串口接收数据响应函数 */
    void on_actClearRx_triggered();
    void on_btnSend_clicked();

public slots:
    /* 自定义曹函数 */
    void onTimeOut();

private:
    Ui::SerialCommunication *ui;
};
#endif // SERIALCOMMUNICATION_H
