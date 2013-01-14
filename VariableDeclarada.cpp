#include "VariableDeclarada.h"

VariableDeclarada::VariableDeclarada(Variable *variable, Tipo *tipoInferido)
{
    this->variable = variable;
    this->tipoInferido = tipoInferido;
}

Variable* VariableDeclarada::obtenerVariable()
{
    return this->variable;
}

Tipo*    VariableDeclarada::obtenerTipo()
{
    return this->tipoInferido;
}

Tipo* VariableDeclarada::validarSemantica()
{
    return tipoInferido;
}
