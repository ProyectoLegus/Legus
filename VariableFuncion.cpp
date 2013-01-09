#include "VariableFuncion.h"

VariableFuncion::VariableFuncion(string *identificador, Lista *lista_parametros)
    :Variable(identificador, FUNCION)
{
    this->lista_parametros = lista_parametros;
}
