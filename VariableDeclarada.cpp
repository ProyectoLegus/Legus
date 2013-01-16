#include "VariableDeclarada.h"

VariableDeclarada::VariableDeclarada(Variable *variable, Tipo *tipoInferido, int idDeExpresion)
{
    this->variable = variable;
    this->tipoInferido = tipoInferido;
    this->idDeExpresion = idDeExpresion;
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

int VariableDeclarada::obtenerIdDeExpresion()
{
    return this->idDeExpresion;
}

string VariableDeclarada::generarCodigoJava()
{
    return "";
}

void VariableDeclarada::establecerIdDeExpresion(int idDeExpresion)
{
    this->idDeExpresion = idDeExpresion;
}
