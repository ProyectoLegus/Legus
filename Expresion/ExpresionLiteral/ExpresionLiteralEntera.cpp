#include "Expresion/ExpresionLiteral/ExpresionLiteralEntera.h"

ExpresionLiteralEntera::ExpresionLiteralEntera(int valor, int numeroDeLinea)
    :Expresion(LITERALENTERA,numeroDeLinea)
{
    this->valor = valor;
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoEntero();
}

Tipo* ExpresionLiteralEntera::validarSemantica()
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoEntero();
    return Programa::obtenerInstancia()->obtenerTipoEntero();
}

string ExpresionLiteralEntera::generarCodigoJava()
{
    ostringstream ss;
    ss << this->valor;
    return ss.str();
}
