#include "editor.h"
#include "ui_editor.h"
#include "tokens.h"

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
    flujo << ui->textEdit->toPlainText() << "\n";
    flujo.flush();
    archivo.close();

    yyin = fopen("prueba.txt","rt");
    //YY_BUFFER_STATE bs = yy_create_buffer(yyin,YY_BUF_SIZE);

    if( yyin )
    {
        if( yyparse() )
            QMessageBox::about(this,"Parsing","Error?");
        else
            QMessageBox::about(this,"Parsing","Completado...");        
    }
    fclose(yyin);
    //yy_flush_buffer(bs);

    /*Limpiar UI*/

    ui->listUtilizar->clear();
    ui->listVariables->clear();
    ui->listFunciones->clear();
    ui->listInstrucciones->clear();

    try
    {
        Instruccion *instrucciones = Programa::obtenerInstancia()->instrucciones;
        Instruccion *actual = instrucciones;
        while(actual!=0)
        {
            actual->validarSemantica();
            actual = actual->obtenerSiguiente();
        }

        string codigo="";
        actual = instrucciones;
        while(actual!=0)
        {
            codigo += actual->generarCodigoJava();
            actual = actual->obtenerSiguiente();
        }
        QMessageBox::about(0,"Codigo Generado", QString(codigo.c_str()));

    }
    catch(ExcepcionLegus exa)
    {
        int linea = exa.obtenerNumeroDeLinea();
        QString lineaError = linea==0?"":QString("Alrededor de la linea: ")+QString::number(linea);
        QMessageBox::about(0,"Error",QString(exa.obtenerMensaje().c_str())+lineaError);
    }
    /*Agregar optimizador de codigo, Borrar variables que no se usan, ofuscar el codigo*/
}
