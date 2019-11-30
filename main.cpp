#include "sevencins.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sevencins w;
    w.show();
    return a.exec();
}
