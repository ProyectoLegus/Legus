#ifndef VARIABLE_H
#define VARIABLE_H

#include "Expresion.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Variable : public Expresion
{
public:
    Variable(string *identificador, int numeroDeLinea, int idDeExpresion, Expresiones tipo=VARIABLENORMAL);
    Variable(string *identificador,Expresion *expresion , int numeroDeLinea, int idDeExpresion, Expresiones tipo=VARIABLENORMAL);
    string* obtenerIdentificador();
    virtual Tipo* validarSemantica();
    Tipo*   obtenerTipoDeVariable();
    int     obtenerIdDeExpresion();
    virtual string generarCodigoJava();


private:
    string *identificador;
    Expresion *expresion;
    int idDeExpresion;
};

#endif // VARIABLE_H
