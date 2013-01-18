#ifndef DECLARACIONUTILIZAR_H
#define DECLARACIONUTILIZAR_H

#include "Expresion/Variables/Variable.h"
#include "Expresion/Variables/VariablePuerto.h"
#include "Expresion/Variables/VariableSensor.h"

class DeclaracionUtilizar
{
public:
    DeclaracionUtilizar(VariablePuerto *puerto, VariableSensor *sensor, Variable *variable);
    Variable*           obtenerVariable();
    VariablePuerto*     obtenerPuerto();
    VariableSensor*     obtenerSensor();

private:
    Variable       *variable;
    VariablePuerto *puerto;
    VariableSensor *sensor;
};

#endif // DECLARACIONUTILIZAR_H
