#include "DeclaracionDeFuncion.h"

DeclaracionDeFuncion::DeclaracionDeFuncion(Variable *variable, Lista *lista_parametros, Instruccion *instrucciones)
{
    this->variable = variable;
    this->lista_parametros = lista_parametros;
    this->instrucciones = instrucciones;
}
