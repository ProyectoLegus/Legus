#include "Instruccion/InstruccionCaso.h"

InstruccionCaso::InstruccionCaso(Expresion *expresion, ListaDeCaso *listaDeCaso, Instruccion *instrucciones_sino,
                                 Instruccion *siguiente, int idDeExpresion, int numeroDeLinea)
    :Instruccion(siguiente, CASO, idDeExpresion, numeroDeLinea)
{
    this->expresion = expresion;
    this->listaDeCaso = listaDeCaso;
    this->instrucciones_sino = instrucciones_sino;
}

void InstruccionCaso::validarSemantica()
{
    /*
        *Si no viene variable todo en el caso debe evaluar a booleano
        *Si viene variable todo debe evaluar al tipo de variable
    */
    if(expresion != 0)
    {
        /*Todo en lista de caso debe reducir a el tipo de abajo
            Acepta de todo menos booleano
        */
        Tipo* tipoVariable = expresion->validarSemantica();
        if( tipoVariable->tipo == Booleano)
        {
            throw(ExcepcionLegus("Expresion no puede evaluar a 'Booleano' cuando se utiliza una variable en instruccion caso",numeroDeLinea));
        }

        ListaDeCaso *casos = listaDeCaso;
        while(casos!=0)
        {
            Tipo *tipoDelCaso = casos->obtenerExpresion()->validarSemantica();
            if( tipoDelCaso->tipo != tipoVariable->tipo)
            {
                throw(ExcepcionLegus("En caso expresion debe evaluar a lo mismo que variable",numeroDeLinea));
            }
            if( casos->obtenerInstruccion() != 0)
            {
                casos->obtenerInstruccion()->validarSemantica();
                if( casos->obtenerInstruccion()->obtenerSiguiente() != 0)
                {
                    casos->obtenerInstruccion()->obtenerSiguiente()->validarSemantica();
                }
            }
            casos = casos->obtenerSiguiente();
        }
    }
    else
    {
        /*Acepta booleano*/
        ListaDeCaso *casos = listaDeCaso;
        while(casos!=0)
        {
            Tipo *tipoDelCaso = casos->obtenerExpresion()->validarSemantica();
            if( tipoDelCaso->tipo != Booleano)
            {
                throw(ExcepcionLegus("En caso expresion debe evaluar a 'Booleano'",numeroDeLinea));
            }
            if( casos->obtenerInstruccion() != 0)
            {
                casos->obtenerInstruccion()->validarSemantica();
                if( casos->obtenerInstruccion()->obtenerSiguiente() != 0)
                {
                    casos->obtenerInstruccion()->obtenerSiguiente()->validarSemantica();
                }
            }
            casos = casos->obtenerSiguiente();
        }
    }
}

string InstruccionCaso::generarCodigoJava()
{
    stringstream codigoInstruccionCaso;
    if( expresion != 0)
    {
        /*java soporta: entero, caracter en switch*/

        ListaDeCaso *casos = listaDeCaso;
        while(casos!=0)
        {
            Tipo* tipoInferido = casos->obtenerExpresion()->tipoInferido;
            if( tipoInferido->tipo == Entero || tipoInferido->tipo == Caracter)
            {
                codigoInstruccionCaso << "switch(";
                codigoInstruccionCaso << expresion->generarCodigoJava();
                codigoInstruccionCaso << ")";
                codigoInstruccionCaso << "\n{\n";
                codigoInstruccionCaso << "\n}\n";
            }
            casos = casos->obtenerSiguiente();
        }

        /*Flotante, Cadena en if-elseif-else*/
        casos = listaDeCaso;
        while(casos!=0)
        {
            Tipo* tipoInferido = casos->obtenerExpresion()->tipoInferido;
            if( tipoInferido->tipo == Flotante || tipoInferido->tipo == Cadena)
            {
                codigoInstruccionCaso << "if( ";
                codigoInstruccionCaso << expresion->generarCodigoJava();
                codigoInstruccionCaso << " == ";
                codigoInstruccionCaso << casos->obtenerExpresion()->generarCodigoJava();
                codigoInstruccionCaso << ")";
                codigoInstruccionCaso << "\n{\n";

                if( casos->obtenerInstruccion()!= 0)
                {
                    codigoInstruccionCaso << casos->obtenerInstruccion()->generarCodigoJava();
                    if(casos->obtenerInstruccion()->obtenerSiguiente() != 0)
                    {
                        codigoInstruccionCaso << casos->obtenerInstruccion()->obtenerSiguiente()->generarCodigoJava();
                    }
                }

                codigoInstruccionCaso << "\n}\n";
            }

            casos = casos->obtenerSiguiente();
        }
    }
    else
    {
        /*
            Encadenado de if
            No lleva else porque en un caso deberia entrar a todos los lados
        */
        ListaDeCaso *casos = listaDeCaso;
        while(casos!=0)
        {
            codigoInstruccionCaso << "if( ";
            codigoInstruccionCaso << casos->obtenerExpresion()->generarCodigoJava();
            codigoInstruccionCaso << ")";
            codigoInstruccionCaso << "\n{\n";
            if( casos->obtenerInstruccion()!= 0)
            {
                codigoInstruccionCaso << casos->obtenerInstruccion()->generarCodigoJava();
                if(casos->obtenerInstruccion()->obtenerSiguiente() != 0)
                {
                    codigoInstruccionCaso << casos->obtenerInstruccion()->obtenerSiguiente()->generarCodigoJava();
                }
            }
            codigoInstruccionCaso << "\n}\n";

            casos = casos->obtenerSiguiente();
        }
    }
    return codigoInstruccionCaso.str();
}
