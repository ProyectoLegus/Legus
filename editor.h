#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

#include <iostream>
#include <stdio.h>

extern int yyparse();
extern FILE *yyin;

namespace Ui {
    class Editor;
}

class Editor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = 0);
    ~Editor();

private slots:
    void on_btnCompilar_clicked();

private:
    Ui::Editor *ui;
};

#endif // EDITOR_H
