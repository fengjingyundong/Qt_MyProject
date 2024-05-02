#include "qtchart.h"
#include "ui_qtchart.h"
#include <QDebug>
#include <QGraphicsRectItem>
#include <QPen>
#include <QDesktopWidget>
#include <QScreen>

QtChart::QtChart(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QtChart)
{
    ui->setupUi(this);

    labViewCord = new QLabel("View坐标：");
    labViewCord->setMinimumWidth(150);
    ui->statusbar->addWidget(labViewCord);

    labSceneCord = new QLabel("Scene坐标");
    labSceneCord->setMinimumWidth(150);
    ui->statusbar->addWidget(labSceneCord);

    labItemCord = new QLabel("Item坐标：");
    labItemCord->setMinimumWidth(150);
    ui->statusbar->addWidget(labItemCord);

    ui->graphicsView->setCursor(Qt::CrossCursor);
    ui->graphicsView->setMouseTracking(true);

    connect(ui->graphicsView,SIGNAL(mouseMovePoint(QPoint)),
            this,SLOT(on_mouseMovePoint(QPoint)));
    connect(ui->graphicsView,SIGNAL(mouseClicked(QPoint)),
            this,SLOT(on_mouseClicked(QPoint)));

    initGraphicsView(); //图元初始化

    QScreen *guiScreen = QGuiApplication::primaryScreen();
    QRect guiRect = guiScreen->availableGeometry();
    qDebug()<< guiRect.width() << guiRect.height();
    qDebug()<<this->width()<<this->height();
}

QtChart::~QtChart()
{
    delete ui;
}

void QtChart::resizeEvent(QResizeEvent *event)
{
    // qDebug()<<ui->graphicsView->width() << ui->graphicsView->height();
    ui->labViewSize->setText(QString::asprintf("Graphics View坐标：宽=%d，高=%d",
                                               ui->graphicsView->width(),
                                               ui->graphicsView->height()));

    QRectF rect = ui->graphicsView->sceneRect();
    ui->labSceneRect->setText(QString::asprintf("GraphicsView::sceneRect=(L,R,W,G)"
                                                "=%.0f,%.0f,%.0f,%.0f",
                                                rect.left(),rect.top(),
                                                rect.width(),rect.height()));

    QWidget::resizeEvent(event);    //控制权交还给基类
}

void QtChart::initGraphicsView()
{
    QRectF rect(-200,-100,400,200);
    scene = new QGraphicsScene(rect);
    ui->graphicsView->setScene(scene);
    QGraphicsRectItem *item = new QGraphicsRectItem(rect);
    item->setFlags(QGraphicsRectItem::ItemIsFocusable|
                   QGraphicsItem::ItemIsSelectable);

    QPen pen;
    pen.setWidth(2);
    item->setPen(pen);
    scene->addItem(item);

    QGraphicsEllipseItem *item2 = new QGraphicsEllipseItem(-100,-50,200,100);
    // item2->setPos(0,0);
    item2->setFlags(QGraphicsRectItem::ItemIsFocusable|
                   QGraphicsItem::ItemIsSelectable|
                   QGraphicsItem::ItemIsMovable);
    item2->setBrush(Qt::blue);
    scene->addItem(item2);

    QGraphicsEllipseItem *item3 = new QGraphicsEllipseItem(-50,-50,100,100);
    item3->setPos(rect.right(),rect.bottom());
    item3->setFlags(QGraphicsRectItem::ItemIsFocusable|
                    QGraphicsItem::ItemIsSelectable|
                    QGraphicsItem::ItemIsMovable);

    item3->setBrush(Qt::red);
    scene->addItem(item3);
}

void QtChart::on_mouseMovePoint(QPoint point)
{
    labViewCord->setText(QString::asprintf("View坐标：%d,%d",
                                            point.x(),point.y()));

    QPointF pointScene = ui->graphicsView->mapToScene(point);
    labSceneCord->setText(QString::asprintf("Scene坐标：%.0f,%.0f",
                                            pointScene.x(),pointScene.y()));

    
}

void QtChart::on_mouseClicked(QPoint point)
{
    QPointF pointScene = ui->graphicsView->mapToScene(point);
    QGraphicsItem *item = NULL;
    item = scene->itemAt(pointScene,ui->graphicsView->transform());
    if(item != NULL)
    {
        QPointF pointItem = item->mapFromScene(pointScene);
        labItemCord->setText(QString::asprintf("Item坐标：%.0f,%.0f",
                                               pointItem.x(),pointItem.y()));

    }
    return;
    // labItemCord->setText(QString::asprintf());
}
