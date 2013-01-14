#include "VariableSensor.h"

VariableSensor::VariableSensor(string *identificador, int numeroDeLinea)
    :Variable(identificador, numeroDeLinea, SENSOR)
{
}

Tipo* VariableSensor::validarSemantica()
{
    return 0;
}
