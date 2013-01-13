#include "VariableSensor.h"

VariableSensor::VariableSensor(string *identificador)
    :Variable(identificador, SENSOR)
{
}

Tipo* VariableSensor::validarSemantica()
{
    return 0;
}
