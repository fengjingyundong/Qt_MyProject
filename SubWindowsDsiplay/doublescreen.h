#ifndef DOUBLESCREEN_H
#define DOUBLESCREEN_H

#include <QMainWindow>
#include <QLabel>

class DoubleScreen : public QMainWindow
{
    Q_OBJECT
public:
    explicit DoubleScreen(QWidget *parent = nullptr);

    void initLab(QRect rect);
private:
    QLabel *lab;
signals:
};

#endif // DOUBLESCREEN_H
