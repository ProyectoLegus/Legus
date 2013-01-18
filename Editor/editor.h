#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QList>

#include <iostream>
#include <stdio.h>
#include <vector>

#include "Bison_Flex/tokens.h"
#include "Bison_Flex/parser.h"
#include "Programa/Programa.h"
#include "Instruccion/Instruccion.h"
#include "Programa/DeclaracionDeFuncion.h"
#include "Programa/ExcepcionLegus.h"

extern int yyparse();
extern FILE *yyin;
extern int correlativo;

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
