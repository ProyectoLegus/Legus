#ifndef VARIABLEADECLARAR_H
#define VARIABLEADECLARAR_H

#include <iostream>
#include <string>

#include "Programa/Tipos/Tipo.h"

using namespace std;

class VariableADeclarar
{
public:
    VariableADeclarar(string *variable, Tipo *tipo, int id);
    string *variable;
    Tipo   *tipo;
    int id;
};

#endif // VARIABLEADECLARAR_H
