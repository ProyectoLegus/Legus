#ifndef VARIABLEDECLARADA_H
#define VARIABLEDECLARADA_H

#include "tipo.h"
#include <iostream>
#include <string>
#include "Variable.h"

using namespace std;

class VariableDeclarada
{
public:
    VariableDeclarada(Variable *variable, Tipo *tipoInferido);
    Variable* obtenerVariable();
    Tipo*    obtenerTipo();
    virtual Tipo* validarSemantica();

private:
    Variable *variable;
    Tipo *tipoInferido;
};

#endif // VARIABLEDECLARADA_H
