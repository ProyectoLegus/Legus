#include "ExpresionLiteralCadena.h"

ExpresionLiteralCadena::ExpresionLiteralCadena(string *valor)
    :Expresion(LITERALCADENA)
{
    this->valor = valor;
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
}

Tipo* ExpresionLiteralCadena::validarSemantica()
{
    return 0;
}
