#include "ExpresionLiteralEntera.h"

ExpresionLiteralEntera::ExpresionLiteralEntera(int valor)
    :Expresion(LITERALENTERA)
{
    this->valor = valor;
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoEntero();
}

Tipo* ExpresionLiteralEntera::validarSemantica()
{
    return 0;
}
