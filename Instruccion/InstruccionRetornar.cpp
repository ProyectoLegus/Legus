#include "Instruccion/InstruccionRetornar.h"

InstruccionRetornar::InstruccionRetornar(Expresion *expresion_de_retorno, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente, RETORNAR, idDeExpresion)
{
    this->expresion_de_retorno = expresion_de_retorno;
}

void InstruccionRetornar::validarSemantica()
{
    Tipo *expresionDeRetorno = expresion_de_retorno->validarSemantica();

    // Aun no se que hacer
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
