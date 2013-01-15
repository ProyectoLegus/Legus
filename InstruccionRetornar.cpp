#include "InstruccionRetornar.h"

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
    return "";
}
