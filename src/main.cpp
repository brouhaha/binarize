#include <QtGui>
#include "ImageView.h"
#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app (argc, argv);
    MainWindow mw;
    mw.show ();
    return app.exec();
}
