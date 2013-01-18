#ifndef VARIABLEARREGLO_H
#define VARIABLEARREGLO_H

#include <iostream>
#include <string>
#include "Expresion/Variables/Variable.h"
#include "Bison_Flex/Lista.h"

using namespace std;

class VariableArreglo : public Variable
{
public:
    VariableArreglo(string *identificador, Lista *lista_indices, int numeroDeLinea, int idDeExpresion);
    Lista *obtenerListaIndices();
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

private:
    Lista *lista_indices;
};

#endif // VARIABLEARREGLO_H
