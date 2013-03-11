#include "Expresion/ExpresionUnaria/ExpresionUnariaNegacion.h"

ExpresionUnariaNegacion::ExpresionUnariaNegacion(Expresion *expresion, int numeroDeLinea)
    :ExpresionUnaria(expresion, NEGACION, numeroDeLinea)
{
}

Tipo* ExpresionUnariaNegacion::validarSemantica()
{
    Tipo *tipoExpresion = obtenerExpresion()->validarSemantica();


    if( tipoExpresion->tipo == Booleano)
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
        return Programa::obtenerInstancia()->obtenerTipoBooleano();
    }
    throw(ExcepcionLegus("Tipos incompatibles en operacion unaria negacion 'no' ",numeroDeLinea));
}

string ExpresionUnariaNegacion::generarCodigoJava()
{
    string codidoExpresion = this->obtenerExpresion()->generarCodigoJava();

    return "!"+codidoExpresion;
}
