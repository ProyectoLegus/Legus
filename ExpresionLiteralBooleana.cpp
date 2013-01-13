#include "ExpresionLiteralBooleana.h"

ExpresionLiteralBooleana::ExpresionLiteralBooleana(bool valor)
    :Expresion(LITERALBOOLEANA)
{
    this->valor = valor;
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionLiteralBooleana::validarSemantica()
{
    return 0;
}
