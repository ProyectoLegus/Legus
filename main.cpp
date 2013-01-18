#include <QtGui/QApplication>
#include "Editor/editor.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Editor w;
    w.show();
    return a.exec();
}
