#include "InstruccionRetornar.h"

InstruccionRetornar::InstruccionRetornar(Expresion *expresion_de_retorno, Instruccion *siguiente)
    :Instruccion(siguiente, RETORNAR)
{
    this->expresion_de_retorno = expresion_de_retorno;
}
