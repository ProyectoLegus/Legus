#include "ExpresionLiteralFlotante.h"

ExpresionLiteralFlotante::ExpresionLiteralFlotante(float valor)
    :Expresion(LITERALFLOTANTE)
{
    this->valor = valor;
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoFlotante();
}

Tipo* ExpresionLiteralFlotante::validarSemantica()
{
    return 0;
}
