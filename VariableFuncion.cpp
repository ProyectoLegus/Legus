#include "VariableFuncion.h"

VariableFuncion::VariableFuncion(string *identificador, Lista *lista_parametros)
    :Variable(identificador, FUNCION)
{
    this->lista_parametros = lista_parametros;
}

Lista* VariableFuncion::obtenerListaParametros()
{
    return this->lista_parametros;
}

Tipo* VariableFuncion::validarSemantica()
{
    return 0;
}
