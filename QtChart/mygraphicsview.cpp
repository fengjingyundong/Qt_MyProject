#include "mygraphicsview.h"
#include <QMouseEvent>

MyGraphicsView::MyGraphicsView(QWidget *parent) : QGraphicsView(parent)
{}

void MyGraphicsView::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        QPoint point = event->pos();    //view 坐标
        emit mouseClicked(point);       //发射View信号量
    }
    QGraphicsView::mousePressEvent(event);  //控制权交还给基类

}

void MyGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
    QPoint point = event->pos();    //view 坐标
    emit mouseMovePoint(point);

    QGraphicsView::mouseMoveEvent(event);   //控制权交还给基类

}
