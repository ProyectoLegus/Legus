#include "ExpresionLiteralCadena.h"

ExpresionLiteralCadena::ExpresionLiteralCadena(string *valor, int numeroDeLinea)
    :Expresion(LITERALCADENA,numeroDeLinea)
{
    this->valor = valor;
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
}

Tipo* ExpresionLiteralCadena::validarSemantica()
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
    return Programa::obtenerInstancia()->obtenerTipoCadena();
}
