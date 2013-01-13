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
    flujo << ui->textEdit->toPlainText();
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
        vector<VariableDeclarada*> *vars = Programa::obtenerInstancia()->tablaDeVariables;
        for(int i=0; i<vars->size() ;i++)
        {
            VariableDeclarada* vari = vars->at(i);
            ui->listVariables->addItem(QString(vari->obtenerVariable()->c_str()));
        }

        vector<DeclaracionUtilizar*> *tblUti = Programa::obtenerInstancia()->tablaDePuertosYSensores;
        for(int i=0; i<tblUti->size(); i++)
        {
            DeclaracionUtilizar* dclr = tblUti->at(i);
            QString val = QString(dclr->obtenerVariable()->obtenerIdentificador()->c_str()) +
                        " " + QString(dclr->obtenerPuerto()->obtenerIdentificador()->c_str());
            ui->listUtilizar->addItem(val);
        }

        vector<DeclaracionDeFuncion*> *tblFun = Programa::obtenerInstancia()->tablaDeFunciones;
        for(int i=0; i<tblFun->size(); i++)
        {
            DeclaracionDeFuncion* dclr = tblFun->at(i);
            QString val = QString(dclr->obtenerVariable()->obtenerIdentificador()->c_str());
            ui->listFunciones->addItem(val);
        }
    }
    catch(ExcepcionLegus exa)
    {

    }
}
