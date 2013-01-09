#ifndef INSTRUCCIONASIGNACION_H
#define INSTRUCCIONASIGNACION_H

#include "Instruccion.h"
#include "Expresion.h"
#include "Variable.h"

class InstruccionAsignacion : public Instruccion
{
public:
    InstruccionAsignacion(Expresion *variable, Expresion *expresion, Instruccion *siguiente);

private:
    Expresion *variable;
    Expresion *expresion;
};

#endif // INSTRUCCIONASIGNACION_H
