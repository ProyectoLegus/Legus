#include "Programa/DeclaracionDeFuncion.h"

DeclaracionDeFuncion::DeclaracionDeFuncion(Variable *variable, Lista *lista_parametros, Instruccion *instrucciones)
{
    this->variable = variable;
    this->lista_parametros = lista_parametros;
    this->instrucciones = instrucciones;
}

Variable* DeclaracionDeFuncion::obtenerVariable()
{
    return this->variable;
}

Lista* DeclaracionDeFuncion::obtenerListaParametros()
{
    return this->lista_parametros;
}

Instruccion* DeclaracionDeFuncion::obtenerInstruccion()
{
    return this->instrucciones;
}

string DeclaracionDeFuncion::obtenerCodigoDeFuncion(Lista *lista_de_parametros)
{
    stringstream codigoFuncion;
    codigoFuncion << "public static ";
    /*Averiguar cual es el tipo de retorno de la funcion*/

    codigoFuncion << *this->variable->obtenerIdentificador();
    codigoFuncion << "(";
    /*PONER LO PARAMETROS*/
    codigoFuncion << ")\n";
    codigoFuncion << "{\n";
    codigoFuncion << "}\n";
    return codigoFuncion.str();
}
