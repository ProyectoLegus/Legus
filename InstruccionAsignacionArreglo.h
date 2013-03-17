#ifndef INSTRUCCIONASIGNACIONARREGLO_H
#define INSTRUCCIONASIGNACIONARREGLO_H

#include <sstream>

#include "Instruccion/Instruccion.h"
#include "Expresion/Expresion.h"
#include "Expresion/Variables/Variable.h"
#include "Expresion/Variables/VariableArreglo.h"
#include "Programa/Programa.h"
#include "Programa/VariableADeclarar.h"

class InstruccionAsignacionArreglo : public Instruccion
{
public:
    InstruccionAsignacionArreglo(VariableArreglo *variable, Expresion *expr,
                                 Instruccion *siguiente, int idDeExpresion,
                                 int numeroDeLinea);

    virtual void validarSemantica();
    virtual string generarCodigoJava();

private:
    VariableArreglo *variable;
    Expresion *expr;
};

#endif // INSTRUCCIONASIGNACIONARREGLO_H
