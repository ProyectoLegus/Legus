#ifndef VARIABLE_H
#define VARIABLE_H

#include <iostream>
#include <string>
#include "Expresion.h"

using namespace std;

class Variable : public Expresion
{
public:
    Variable(string *identificador, Expresiones tipo=VARIABLENORMAL);
    string* obtenerIdentificador();
    virtual Tipo* validarSemantica();

private:
    string *identificador;
};

#endif // VARIABLE_H
