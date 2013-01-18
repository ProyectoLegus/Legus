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
