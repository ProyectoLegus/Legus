#ifndef DECLARACIONUTILIZAR_H
#define DECLARACIONUTILIZAR_H

#include "Variable.h"
#include "VariablePuerto.h"
#include "VariableSensor.h"

class DeclaracionUtilizar
{
public:
    DeclaracionUtilizar(VariablePuerto *puerto, VariableSensor *sensor, Variable *variable);

private:
    Variable       *variable;
    VariablePuerto *puerto;
    VariableSensor *sensor;
};

#endif // DECLARACIONUTILIZAR_H
