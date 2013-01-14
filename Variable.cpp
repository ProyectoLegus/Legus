#include "Variable.h"
#include "Programa.h"

Variable::Variable(string *identificador, int numeroDeLinea, Expresiones tipo)
    :Expresion(tipo,numeroDeLinea)
{
    this->identificador = identificador;
}

string* Variable::obtenerIdentificador()
{
    return this->identificador;
}

Tipo* Variable::validarSemantica()
{
    Tipo* tipoDeVariable = obtenerTipoDeVariable();

    if( tipoDeVariable != 0)
    {
        return tipoDeVariable;
    }

    throw(ExcepcionLegus("¡Variable no existe!",numeroDeLinea));
}

Tipo* Variable::obtenerTipoDeVariable()
{
    vector<VariableDeclarada*> *variables = Programa::obtenerInstancia()->tablaDeVariables;

    for(unsigned int i = 0 ; i< variables->size(); i++)
    {
        VariableDeclarada* variable = variables->at(i);
        if( variable->obtenerVariable()->obtenerIdentificador()->compare( *identificador ))
        {

        }
    }

    return 0;
}
