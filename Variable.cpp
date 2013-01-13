#include "Variable.h"

Variable::Variable(string *identificador, Expresiones tipo)
    :Expresion(VARIABLENORMAL)
{
    this->identificador = identificador;
}

string* Variable::obtenerIdentificador()
{
    return this->identificador;
}

Tipo* Variable::validarSemantica()
{
    return 0;
}
