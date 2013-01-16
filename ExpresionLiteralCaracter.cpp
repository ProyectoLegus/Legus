#include "ExpresionLiteralCaracter.h"

ExpresionLiteralCaracter::ExpresionLiteralCaracter(char valor, int numeroDeLinea)
    :Expresion(LITERALCARACTER,numeroDeLinea)
{
    this->valor = valor;
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCaracter();
}

Tipo* ExpresionLiteralCaracter::validarSemantica()
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCaracter();
    return Programa::obtenerInstancia()->obtenerTipoCaracter();
}

string ExpresionLiteralCaracter::generarCodigoJava()
{
    string codigoLiteralCaracter = "'";
    codigoLiteralCaracter += this->valor;
    codigoLiteralCaracter += "'";
    return codigoLiteralCaracter;
}
