#ifndef EXPRESIONLITERALCADENA_H
#define EXPRESIONLITERALCADENA_H

#include "Expresion.h"
#include "Programa.h"

#include <iostream>
#include <string>

using namespace std;

class ExpresionLiteralCadena : public Expresion
{
public:
    ExpresionLiteralCadena(string *valor, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

private:
    string *valor;
};

#endif // EXPRESIONLITERALCADENA_H
