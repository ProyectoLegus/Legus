#include "VariablePuerto.h"

VariablePuerto::VariablePuerto(string *identificador, int numeroDeLinea)
    :Variable(identificador, numeroDeLinea, PUERTO)
{
}

Tipo* VariablePuerto::validarSemantica()
{
    return 0;
}
