#include "Expresion/Variables/VariableFuncion.h"
#include "Programa/Programa.h"

VariableFuncion::VariableFuncion(string *identificador, Lista *lista_parametros, int numeroDeLinea, int idDeExpresion)
    :Variable(identificador, numeroDeLinea, idDeExpresion, FUNCION)
{
    this->lista_parametros = lista_parametros;
}

Lista* VariableFuncion::obtenerListaParametros()
{
    return this->lista_parametros;
}

Tipo* VariableFuncion::validarSemantica()
{
    /*2 casos, es declarada funcion local, o es funcion incorporada*/
    Funcion *funcion = Programa::obtenerInstancia()->existeFuncionIncorporada(*obtenerIdentificador(), lista_parametros);

    if(funcion!=0)
    {
        return funcion->tipoDeRetorno;
    }
    return 0;
}

string VariableFuncion::generarCodigoJava()
{
    stringstream codigo;
    codigo << *this->obtenerIdentificador();
    codigo << "(";

    for( int i = this->lista_parametros->lista->size()-1; i >=0 ; i--)
    {
        Expresion *expresion = this->lista_parametros->lista->at(i);
        codigo << expresion->generarCodigoJava();

        if( i > 0 )
        {
            codigo << ", ";
        }
    }

    codigo << ") ";
    return codigo.str();
}
