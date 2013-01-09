#include "ExpresionLiteralBooleana.h"

ExpresionLiteralBooleana::ExpresionLiteralBooleana(bool valor)
    :Expresion(LITERALBOOLEANA)
{
    this->valor = valor;
}
