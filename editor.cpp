#include "editor.h"
#include "ui_editor.h"

Editor::Editor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
}

Editor::~Editor()
{
    delete ui;
}

void Editor::on_btnCompilar_clicked()
{
    QFile archivo("prueba.txt");
    if (!archivo.open(QIODevice::WriteOnly | QIODevice::Text))
             return;
    QTextStream flujo(&archivo);
    flujo << ui->textEdit->toPlainText();
    flujo.flush();
    archivo.close();

    yyin = fopen("prueba.txt","rt");
    if( yyin )
    {
        if( yyparse() )
            QMessageBox::about(this,"Parsing","Error?");
        else
            QMessageBox::about(this,"Parsing","Completado...");
    }
}
