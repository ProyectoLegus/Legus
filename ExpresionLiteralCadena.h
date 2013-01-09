#ifndef EXPRESIONLITERALCADENA_H
#define EXPRESIONLITERALCADENA_H

#include "Expresion.h"

#include <iostream>
#include <string>

using namespace std;

class ExpresionLiteralCadena : public Expresion
{
public:
    ExpresionLiteralCadena(string *valor);

private:
    string *valor;
};

#endif // EXPRESIONLITERALCADENA_H
