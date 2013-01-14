#ifndef VARIABLESENSOR_H
#define VARIABLESENSOR_H

#include "Variable.h"

class VariableSensor : public Variable
{
public:
    VariableSensor(string *identificador, int numeroDeLinea);
    virtual Tipo* validarSemantica();
};

#endif // VARIABLESENSOR_H
