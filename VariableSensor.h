#ifndef VARIABLESENSOR_H
#define VARIABLESENSOR_H

#include "Variable.h"

class VariableSensor : public Variable
{
public:
    VariableSensor(string *identificador, int numeroDeLinea, int idDeExpresion);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // VARIABLESENSOR_H
