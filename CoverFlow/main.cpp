#include "CoverFlowMW.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //a.processEvents();

    CoverFlowMW &w = CoverFlowMW::getInstance();
    w.show();
    return a.exec();
}
