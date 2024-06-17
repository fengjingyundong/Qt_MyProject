#include "mainwindow.h"

#include <QApplication>
#include <QGuiApplication>
#include <QScreen>
#include <QRect>
#include <QLabel>
#include <QDebug>
#include <doublescreen.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;

    QList<QScreen *> list_screen = QGuiApplication::screens();
    QRect rect1 = list_screen.at(0)->geometry();
    QRect rect2 = list_screen.at(1)->geometry();
    qDebug()<<list_screen.size();

    qDebug()<<rect1.width()<<","<<rect1.height();
    qDebug()<<rect2.width()<<","<<rect2.height();

    DoubleScreen *m_douScreen = new DoubleScreen;
    m_douScreen->initLab(rect2);
    m_douScreen->show();

    // w.show();
    return a.exec();
}



// void DoubleScreen::initLab(QRect rect)
// {
//     setGeometry(rect);
//     this->resize(800,480);
//     lab=new QLabel("this is desktop"+QString::number(num+1),this);
//     lab->setGeometry(0,0,rect.width(),rect.height());
//     lab->setAlignment(Qt::AlignCenter);

// }
