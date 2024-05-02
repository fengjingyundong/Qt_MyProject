#ifndef QTCHART_H
#define QTCHART_H

#include <QMainWindow>
#include <QLabel>
#include <QGraphicsScene>


QT_BEGIN_NAMESPACE

namespace Ui {
class QtChart;
}
QT_END_NAMESPACE

class QtChart : public QMainWindow
{
    Q_OBJECT

public:
    QtChart(QWidget *parent = nullptr);
    ~QtChart();

protected:
    void resizeEvent(QResizeEvent *event) override;

private:
    Ui::QtChart *ui;

    QLabel *labViewCord;
    QLabel *labSceneCord;
    QLabel *labItemCord;
    QGraphicsScene *scene;
    void initGraphicsView();

private slots:
    void on_mouseMovePoint(QPoint point);
    void on_mouseClicked(QPoint point);

};
#endif // QTCHART_H
