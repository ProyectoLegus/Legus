#include "ExpresionArreglo.h"

ExpresionArreglo::ExpresionArreglo(int numeroDeLinea)
    :Expresion(ARREGLO, numeroDeLinea)
{
}

Tipo* ExpresionArreglo::validarSemantica()
{
    return Programa::obtenerInstancia()->obtenerTipoArreglo();
}

string ExpresionArreglo::generarCodigoJava()
{
    return "";
}
