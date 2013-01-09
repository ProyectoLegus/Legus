#include "ExpresionLiteralFlotante.h"

ExpresionLiteralFlotante::ExpresionLiteralFlotante(float valor)
    :Expresion(LITERALFLOTANTE)
{
    this->valor = valor;
}
