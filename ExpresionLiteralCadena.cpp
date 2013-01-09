#include "ExpresionLiteralCadena.h"

ExpresionLiteralCadena::ExpresionLiteralCadena(string *valor)
    :Expresion(LITERALCADENA)
{
    this->valor = valor;
}
