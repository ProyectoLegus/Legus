#ifndef INSTRUCCIONASIGNACION_H
#define INSTRUCCIONASIGNACION_H

#include <sstream>

#include "Instruccion/Instruccion.h"
#include "Expresion/Expresion.h"
#include "Expresion/Variables/Variable.h"
#include "Expresion/Variables/VariableArreglo.h"
#include "Programa/Programa.h"
#include "Programa/VariableADeclarar.h"

class InstruccionAsignacion : public Instruccion
{
public:
    InstruccionAsignacion(Expresion *variable, Expresion *expresion,
                          Instruccion *siguiente, int idDeExpresion,
                          int numeroDeLinea);
    InstruccionAsignacion(VariableArreglo *variable, Lista *listaIndices,
                          Instruccion *siguiente, int idDeExpresion,
                          int numeroDeLinea);
    virtual void validarSemantica();
    virtual string generarCodigoJava();
    Expresion*  obtenerVariable();
    Expresion*  obtenerExpresion();
    /*Este metodo esta diseñado para InstruccionPara*/
    string obtenerVariableConIdDeExpresion();

private:
    Expresion *variable;
    Expresion *expresion;
    Lista     *listaIndices;

    string variableConIdDeExpresion;
};

#endif // INSTRUCCIONASIGNACION_H
