#include "widget.h"
#include "./ui_widget.h"
#include <QMetaProperty>
#include <QCheckBox>
#include <qDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);

    boy = new TPerson("汉密尔顿", this);
    boy->setProperty("score", 95); /* 设置属性值 */
    boy->setProperty("age", 45);
    boy->setProperty("sex", "Boy"); /* sex 是动态属性 */
    connect(boy, SIGNAL(ageChanged(int)), this, SLOT(do_ageChanged(int)));

    girl = new TPerson("迪丽热巴", this);
    girl->setProperty("score", 100); /* 设置属性值 */
    girl->setProperty("age", 26);
    girl->setProperty("sex", "Girl"); /* sex 是动态属性 */
    connect(girl, SIGNAL(ageChanged(int)), this, SLOT(do_ageChanged(int)));

    ui->spinBoxBoy->setProperty("isBoy", true);    /* isBoy 是动态属性 */
    ui->spinBoxGirl->setProperty("isGirl", false); /* isGirl 是动态属性 */

    ui->spinBoxBoy->setValue(boy->age());   /* 初始化 男生SpinBox 年龄初始值 */
    ui->spinBoxGirl->setValue(girl->age()); /* 初始化 女生SpinBox 年龄初始值 */

    connect(ui->spinBoxBoy, SIGNAL(valueChanged(int)), this, SLOT(do_spinChanged(int)));
    connect(ui->spinBoxGirl, SIGNAL(valueChanged(int)), this, SLOT(do_spinChanged(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnClose_clicked()
{
    /* 关闭应用程序 */
    this->close();
}

void Widget::on_btnBoyInc_clicked()
{
    // boy->incAge(); /* 男生加一岁 */
    int tAge = ui->spinBoxBoy->value();
    if (tAge < ui->spinBoxBoy->maximum()) /* 男生年龄 上限检测 */
    {
        tAge++;
        ui->spinBoxBoy->setValue(tAge); /* 设置 ui 男生年龄 */
    }
}

void Widget::on_btnGirlInc_clicked()
{
    // girl->incAge(); /* 女生加一岁 */
    int tAge = ui->spinBoxGirl->value();
    if (tAge < ui->spinBoxGirl->maximum()) /* 女生年龄 上限检测 */
    {
        tAge++;
        ui->spinBoxGirl->setValue(tAge); /* 设置 ui 女生年龄 */
    }
}

void Widget::on_btnClear_clicked()
{
    /* 清除文本框 */
    ui->plainTextEdit->clear();
}

/* 自定义槽函数 */
void Widget::do_ageChanged(int value)
{
    /* 年龄改变 */
    Q_UNUSED(value);

    TPerson *person = qobject_cast<TPerson *>(sender()); /* 获取信号发射者 */

    QString hisName = person->property("name").toString(); /* 获得信号发射者 属性 姓名 */
    QString hisSex = person->property("sex").toString();   /* 获得信号发射者 性别信息 */
    int hisAge = person->property("age").toInt();          /* 获得信号发送者 年龄 */

    QString str = QString("%1, %2, 年龄=%3").arg(hisName).arg(hisSex).arg(hisAge);
    ui->plainTextEdit->appendPlainText(str);

    if (hisSex == "Boy")
    {
        /* 男生 */
        ui->spinBoxBoy->setValue(hisAge);
    }
    else
    {
        /* 女生 */
        ui->spinBoxGirl->setValue(hisAge);
    }
}

void Widget::do_spinChanged(int age1)
{
    QSpinBox *spinBox = qobject_cast<QSpinBox *>(sender()); /* 获取信号发射者 */

    bool sex = spinBox->property("isBoy").toBool(); /* 获取信号发射者的性别 男生 ON  女生 OFF */
    if (sex == true)
    {
        /* 男生 */
        boy->setAge(age1);
    }
    else
    {
        /* 女生 */
        girl->setAge(age1);
    }
}

void Widget::on_btnBoyDec_clicked()
{
    /* 男生 年龄递减一 */
    int tAge = ui->spinBoxBoy->value();
    if (tAge > ui->spinBoxBoy->minimum())
    {
        tAge--;
        ui->spinBoxBoy->setValue(tAge); /* 设置 ui 男生年龄 */
    }
}

void Widget::on_btnGirlDec_clicked()
{
    /* 女生 年龄递减一 */
    int tAge = ui->spinBoxGirl->value();
    if (tAge > ui->spinBoxGirl->minimum())
    {
        tAge--;
        ui->spinBoxGirl->setValue(tAge); /* 设置 ui 女生年龄 */
    }
}

/* 输出 类的源对象信息 按钮 */
void Widget::on_btnClassInfo_clicked()
{
    QObject *obj = girl;
    const QMetaObject *meta = obj->metaObject();

    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText(QString("类名称: %1\r\n").arg(meta->className()));

    ui->plainTextEdit->appendPlainText("property:");
    for (int i = meta->propertyOffset(); i < meta->propertyCount(); i++)
    {
        const char *propName = meta->property(i).name();
        QString propValue = obj->property(propName).toString();
        QString str = QString("属性名称=%1,属性值=%2").arg(propName).arg(propValue);
        ui->plainTextEdit->appendPlainText(str);
    }

    ui->plainTextEdit->appendPlainText("classInfo:");
    for (int i = meta->classInfoOffset(); i < meta->classInfoCount(); i++)
    {
        QMetaClassInfo classInfo = meta->classInfo(i);
        ui->plainTextEdit->appendPlainText(
            QString("Name=%1, Value=%2").arg(classInfo.name()).arg(classInfo.value()));
    }
}
