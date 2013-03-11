#ifndef VARIABLE_H
#define VARIABLE_H

#include "Expresion/Expresion.h"
#include "Expresion/Variables/VariableDeclarada.h"

#include <iostream>
#include <string>
#include <sstream>

class VariableDeclarada;

using namespace std;

class Variable : public Expresion
{
public:
    Variable(string *identificador, int numeroDeLinea,
             int idDeExpresion, Expresiones tipo=VARIABLENORMAL);
    Variable(string *identificador,Expresion *expresion , int numeroDeLinea,
             int idDeExpresion, Expresiones tipo=VARIABLENORMAL);
    string* obtenerIdentificador();
    virtual Tipo* validarSemantica();
    Tipo*   obtenerTipoDeVariable();
    int     obtenerIdDeExpresion();
    virtual string generarCodigoJava();
    void establecerIdDeExpresion(int idDeExpresion);

private:
    string *identificador;
    Expresion *expresion;
    int idDeExpresion;

    VariableDeclarada *dclr;
};

#endif // VARIABLE_H
