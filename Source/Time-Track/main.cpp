#include "mainform.h"
#include <QApplication>

#include "xlsxdocument.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainForm *w= new MainForm;
    w->showMaximized();
    QDesktopWidget * widget = QApplication::desktop();
    return a.exec();

}
