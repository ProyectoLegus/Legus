#include "VariablePuerto.h"

VariablePuerto::VariablePuerto(string *identificador, int numeroDeLinea, int idDeExpresion)
    :Variable(identificador, numeroDeLinea, idDeExpresion, PUERTO)
{
}

Tipo* VariablePuerto::validarSemantica()
{
    return 0;
}

string VariablePuerto::generarCodigoJava()
{
    return "";
}
