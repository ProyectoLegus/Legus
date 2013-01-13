#include "VariableDeclarada.h"

VariableDeclarada::VariableDeclarada(string *variable, Tipo *tipoInferido)
{
    this->variable = variable;
    this->tipoInferido = tipoInferido;
}

string* VariableDeclarada::obtenerVariable()
{
    return this->variable;
}

Tipo*    VariableDeclarada::obtenerTipo()
{
    return this->tipoInferido;
}

Tipo* VariableDeclarada::validarSemantica()
{
    return 0;
}
