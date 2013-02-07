#include "Expresion/Variables/VariableArreglo.h"
#include "Programa/Programa.h"

VariableArreglo::VariableArreglo(string *identificador, Lista *lista_indices, int numeroDeLinea, int idDeExpresion)
    :Variable(identificador,numeroDeLinea, idDeExpresion, ARREGLO)
{
    this->lista_indices = lista_indices;
    if( this->lista_indices == 0)
    {
        this->lista_indices = new Lista();
    }
}


Lista* VariableArreglo::obtenerListaIndices()
{
    return this->lista_indices;
}

Tipo* VariableArreglo::validarSemantica()
{
    /*
        Revisar si en la tabla de simbolos el tamaño del arreglo
        y la cantidad en lista_indices es igual **Estas LOCO**
    */
    VariableDeclarada *variableDeclarada = Programa::obtenerInstancia()->existeVariable(obtenerIdentificador(), obtenerIdDeExpresion());

    if(variableDeclarada == 0)
    {
        throw(ExcepcionLegus("Error variable 'VAR' no declarada"));
    }
    else
    {
        VariableArreglo* variable = (VariableArreglo*)variableDeclarada->obtenerVariable();
        if( variable->obtenerListaIndices() != 0 &&
            this->lista_indices != 0)
        {
            Lista* li =  variable->obtenerListaIndices();
                if( li->lista->size() != this->lista_indices->lista->size() )
            {
                throw( ExcepcionLegus("Arreglo no coincide con declaracion") );
            }
        }

        if( variable->obtenerListaIndices() != 0)
        {
            Lista *lista = variable->obtenerListaIndices();
        }
    }

    /*Retornar esto si en la lista de indices no hay nada*/
    return Programa::obtenerInstancia()->obtenerTipoArreglo();
}

string VariableArreglo::generarCodigoJava()
{
    /**/
    return "dd";
}
