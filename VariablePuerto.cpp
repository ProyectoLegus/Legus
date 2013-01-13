#include "VariablePuerto.h"

VariablePuerto::VariablePuerto(string *identificador)
    :Variable(identificador, PUERTO)
{
}

Tipo* VariablePuerto::validarSemantica()
{
    return 0;
}
