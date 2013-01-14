#include "ExpresionLiteralFlotante.h"

ExpresionLiteralFlotante::ExpresionLiteralFlotante(float valor, int numeroDeLinea)
    :Expresion(LITERALFLOTANTE, numeroDeLinea)
{
    this->valor = valor;
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoFlotante();
}

Tipo* ExpresionLiteralFlotante::validarSemantica()
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoFlotante();
    return Programa::obtenerInstancia()->obtenerTipoFlotante();
}
