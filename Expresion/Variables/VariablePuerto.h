#ifndef VARIABLEPUERTO_H
#define VARIABLEPUERTO_H

#include "Variable.h"

class VariablePuerto : public Variable
{
public:
    VariablePuerto(string *identificador, int numeroDeLinea, int idDeExpresion);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // VARIABLEPUERTO_H
