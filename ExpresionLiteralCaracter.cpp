#include "ExpresionLiteralCaracter.h"

ExpresionLiteralCaracter::ExpresionLiteralCaracter(char valor)
    :Expresion(LITERALCARACTER)
{
    this->valor = valor;
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCaracter();
}

Tipo* ExpresionLiteralCaracter::validarSemantica()
{
    return 0;
}
