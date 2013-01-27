#include "Instruccion/InstruccionLlamadaAFuncion.h"

InstruccionLlamadaAFuncion::InstruccionLlamadaAFuncion(string *identificador, Lista *lista_parametros, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente, LLAMADAAFUNCION, idDeExpresion)
{
    this->identificador = identificador;
    this->lista_parametros = lista_parametros;
}

void InstruccionLlamadaAFuncion::validarSemantica()
{
    /*Implementar lo de XML y Jar
        Hacer testing del jar en Lejos
     */

    /*Ver si existe la funcion*/
    vector<DeclaracionDeFuncion*> *tablaDeFunciones = Programa::obtenerInstancia()->tablaDeFunciones;
    for(unsigned int i = 0; i< tablaDeFunciones->size(); i++)
    {
        DeclaracionDeFuncion *declaracion = tablaDeFunciones->at(i);
        if( this->identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
        {
            /*Revisar la cantidad de parametros*/
            if( declaracion->obtenerListaParametros()->lista->size() != lista_parametros->lista->size() )
            {
                throw(ExcepcionLegus("Llamada a funcion erronea"));
            }
        }
    }

}

string InstruccionLlamadaAFuncion::generarCodigoJava()
{
    /*
        En la generacion Tener otra tabla extra de las funciones que
        si estan siendo utilizadas y con que paremtros se llaman.
    */
    return "";
}
