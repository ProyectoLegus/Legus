#include <QtGui/QApplication>
#include "editor.h"
#include "tokens.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Editor w;
    w.show();
    return a.exec();
}
