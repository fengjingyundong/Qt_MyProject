#include "qtchart.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtChart w;
    w.show();
    return a.exec();
}
