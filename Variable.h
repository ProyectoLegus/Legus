#ifndef VARIABLE_H
#define VARIABLE_H

#include "Expresion.h"

#include <iostream>
#include <string>

using namespace std;

class Variable : public Expresion
{
public:
    Variable(string *identificador, int numeroDeLinea, Expresiones tipo=VARIABLENORMAL);
    string* obtenerIdentificador();
    virtual Tipo* validarSemantica();
    Tipo*   obtenerTipoDeVariable();

private:
    string *identificador;
};

#endif // VARIABLE_H
