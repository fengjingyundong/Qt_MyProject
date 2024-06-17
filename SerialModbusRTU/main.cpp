#include "serialcommunication.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SerialCommunication w;
    w.show();
    return a.exec();
}
