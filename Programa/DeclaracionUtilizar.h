#ifndef DECLARACIONUTILIZAR_H
#define DECLARACIONUTILIZAR_H

#include "Expresion/Variables/Variable.h"
#include "Expresion/Variables/VariablePuerto.h"
#include "Expresion/Variables/VariableSensor.h"
#include <string.h>

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
    bool esPuertoYSensorValido(string* puerto, string* sensor);
};

#endif // DECLARACIONUTILIZAR_H
