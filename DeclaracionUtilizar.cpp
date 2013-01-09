#include "DeclaracionUtilizar.h"

DeclaracionUtilizar::DeclaracionUtilizar(VariablePuerto *puerto, VariableSensor *sensor, Variable *variable)
{
    this->variable = variable;
    this->puerto = puerto;
    this->sensor = sensor;
}
