#include "DeclaracionUtilizar.h"

DeclaracionUtilizar::DeclaracionUtilizar(VariablePuerto *puerto, VariableSensor *sensor, Variable *variable)
{
    this->variable = variable;
    this->puerto = puerto;
    this->sensor = sensor;
}

Variable* DeclaracionUtilizar::obtenerVariable()
{
    return this->variable;
}

VariablePuerto* DeclaracionUtilizar::obtenerPuerto()
{
    return this->puerto;
}

VariableSensor* DeclaracionUtilizar::obtenerSensor()
{
    return this->sensor;
}
