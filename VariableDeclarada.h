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
    VariableDeclarada(Variable *variable, Tipo *tipoInferido, int idDeExpresion);
    Variable* obtenerVariable();
    Tipo*    obtenerTipo();
    virtual Tipo* validarSemantica();
    int     obtenerIdDeExpresion();
    void    establecerIdDeExpresion(int idDeExpresion);
    virtual string generarCodigoJava(); 

private:
    Variable *variable;
    Tipo *tipoInferido;
    int idDeExpresion;
};

#endif // VARIABLEDECLARADA_H
