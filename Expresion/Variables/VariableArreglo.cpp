#include "Expresion/Variables/VariableArreglo.h"
#include "Programa/Programa.h"

VariableArreglo::VariableArreglo(string *identificador, Lista *lista_indices, int numeroDeLinea, int idDeExpresion, Tipo *t)
    :Variable(identificador,numeroDeLinea, idDeExpresion, ARREGLO)
{
    this->tipoDeDato = 0;
    establecerTipoDeDato(0);
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
        stringstream ss;
        ss << "Error, variable '";
        ss << *obtenerIdentificador();
        ss << "' no esta definida";
        throw(ExcepcionLegus(ss.str()));
    }
    else
    {
        VariableArreglo* variable = (VariableArreglo*)variableDeclarada->obtenerVariable();
        if( variable->obtenerListaIndices() != 0 &&
            this->lista_indices != 0)
        {
            Lista* li =  variable->obtenerListaIndices();
            if( li->lista != 0)
            {
                if( li->lista->size() != this->lista_indices->lista->size() )
                {
                    throw( ExcepcionLegus("Arreglo no coincide con declaracion") );
                }
            }
            else
            {

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
    /*Que hago aqui?*/
    return "dd";
}

void VariableArreglo::establecerTipoDeDato(Tipo *tipo)
{
    this->tipoDeDato = tipo;
}

Tipo* VariableArreglo::obtenerTipoDeDato()
{
    return tipoDeDato;
}
