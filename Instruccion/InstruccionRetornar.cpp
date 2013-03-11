#include "Instruccion/InstruccionRetornar.h"

InstruccionRetornar::InstruccionRetornar(Expresion *expresion_de_retorno,
                                         Instruccion *siguiente, int idDeExpresion,
                                         int numeroDeLinea)
    :Instruccion(siguiente, RETORNAR, idDeExpresion, numeroDeLinea)
{
    this->expresion_de_retorno = expresion_de_retorno;
}

void InstruccionRetornar::validarSemantica()
{
    establecerTipoDeRetorno( expresion_de_retorno->validarSemantica() );

    // Validar que no este en la linea principal de instrucciones...
    // Que no tenga Siguiente!
    if(obtenerSiguiente() != 0)
    {
        // Decorar esto mas bonito
        throw(ExcepcionLegus("No pueden haber instrucciones debajo de la instruccion Retornar",numeroDeLinea));
    }
}

string InstruccionRetornar::generarCodigoJava()
{
    stringstream codigoInstruccionRetornar;

    codigoInstruccionRetornar << "return ";
    codigoInstruccionRetornar << this->expresion_de_retorno->generarCodigoJava();
    codigoInstruccionRetornar << ";\n";

    /*No puede tener siguiente instruccion, si la hay se ignora*/
    return codigoInstruccionRetornar.str();
}

void InstruccionRetornar::establecerTipoDeRetorno(Tipo *tipoDeRetorno)
{
    this->tipoDeRetorno = tipoDeRetorno;
}

Tipo* InstruccionRetornar::obtenerTipoDeRetorno()
{
    return this->tipoDeRetorno;
}
