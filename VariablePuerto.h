#ifndef VARIABLEPUERTO_H
#define VARIABLEPUERTO_H

#include "Variable.h"

class VariablePuerto : public Variable
{
public:
    VariablePuerto(string *identificador);
    virtual Tipo* validarSemantica();
};

#endif // VARIABLEPUERTO_H
