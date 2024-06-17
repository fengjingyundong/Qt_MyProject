#include "doublescreen.h"
#include <QLabel>
#include <QRect>

DoubleScreen::DoubleScreen(QWidget *parent)
    : QMainWindow{parent}
{}

void DoubleScreen::initLab(QRect rect)
{
    setGeometry(rect);
    // this->resize(rect.width(),rect.height());
    // this->setWindowFlags(Qt::Dialog | Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);
    lab = new QLabel("this is desktop: "+QString::number(rect.width())+","+QString::number(rect.height()),this);
    lab->setGeometry(0,0,200,30);
    lab->setAlignment(Qt::AlignCenter);
}
