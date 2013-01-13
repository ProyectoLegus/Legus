#ifndef VARIABLEDECLARADA_H
#define VARIABLEDECLARADA_H

#include "tipo.h"
#include <iostream>
#include <string>

using namespace std;

class VariableDeclarada
{
public:
    VariableDeclarada(string *variable, Tipo *tipoInferido);
    string* obtenerVariable();
    Tipo*    obtenerTipo();
    virtual Tipo* validarSemantica();

private:
    string *variable;
    Tipo *tipoInferido;
};

#endif // VARIABLEDECLARADA_H
