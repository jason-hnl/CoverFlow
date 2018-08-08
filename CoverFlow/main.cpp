#include "CoverFlow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CoverFlow w;
    w.show();
    return a.exec();
}
