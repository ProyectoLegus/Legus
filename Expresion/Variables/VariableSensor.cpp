#include "Expresion/Variables/VariableSensor.h"

VariableSensor::VariableSensor(string *identificador, int numeroDeLinea, int idDeExpresion)
    :Variable(identificador, numeroDeLinea,idDeExpresion, SENSOR)
{
}

Tipo* VariableSensor::validarSemantica()
{
    return 0;
}

string VariableSensor::generarCodigoJava()
{
    return "";
}
