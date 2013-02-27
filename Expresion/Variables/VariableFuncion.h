#ifndef VARIABLEFUNCION_H
#define VARIABLEFUNCION_H

#include <iostream>
#include <string>
#include "Expresion/Variables/Variable.h"
#include "Instruccion/InstruccionRetornar.h"
#include "Bison_Flex/Lista.h"

using namespace std;

class VariableFuncion : public Variable
{
public:
    VariableFuncion(string *identificador, Lista *lista_parametros, int numeroDeLinea, int idDeExpresion);
    Lista* obtenerListaParametros();
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

private:
    Lista *lista_parametros;
};

#endif // VARIABLEFUNCION_H
