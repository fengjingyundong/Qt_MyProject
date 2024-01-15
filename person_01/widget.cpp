#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    boy = new TPerson("汉密尔顿", this);

    girl = new TPerson("迪丽热巴", this);
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
    boy->incAge();  /* 男生加一岁 */
}


void Widget::on_btnGirlInc_clicked()
{
    girl->incAge(); /* 女生加一岁 */
}


void Widget::on_btnClass_clicked()
{

}


void Widget::on_btnClear_clicked()
{
    /* 清除文本框 */
    ui->plainTextEdit->clear();
}

