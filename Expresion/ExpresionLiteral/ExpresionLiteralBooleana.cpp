#include "Expresion/ExpresionLiteral/ExpresionLiteralBooleana.h"

ExpresionLiteralBooleana::ExpresionLiteralBooleana(bool valor, int numeroDeLinea)
    :Expresion(LITERALBOOLEANA,numeroDeLinea)
{
    this->valor = valor;
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionLiteralBooleana::validarSemantica()
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
    return Programa::obtenerInstancia()->obtenerTipoBooleano();
}

string ExpresionLiteralBooleana::generarCodigoJava()
{
    return valor ? " true " : " false ";
}
