#ifndef VARIABLEFUNCION_H
#define VARIABLEFUNCION_H

#include <iostream>
#include <string>
#include "Variable.h"
#include "Lista.h"

using namespace std;

class VariableFuncion : public Variable
{
public:
    VariableFuncion(string *identificador, Lista *lista_parametros);
    Lista* obtenerListaParametros();
    virtual Tipo* validarSemantica();

private:
    Lista *lista_parametros;
};

#endif // VARIABLEFUNCION_H
