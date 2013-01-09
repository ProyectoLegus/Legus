#include "Variable.h"

Variable::Variable(string *identificador, Expresiones tipo)
    :Expresion(VARIABLENORMAL)
{
    this->identificador = identificador;
}
