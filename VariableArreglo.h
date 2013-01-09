#ifndef VARIABLEARREGLO_H
#define VARIABLEARREGLO_H

#include <iostream>
#include <string>
#include "Variable.h"
#include "Lista.h"

using namespace std;

class VariableArreglo : public Variable
{
public:
    VariableArreglo(string *identificador, Lista *lista_indices);

private:
    Lista *lista_indices;
};

#endif // VARIABLEARREGLO_H
