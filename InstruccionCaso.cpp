#include "InstruccionCaso.h"

InstruccionCaso::InstruccionCaso(Expresion *expresion, ListaDeCaso *listaDeCaso, Instruccion *instrucciones_sino, Instruccion *siguiente)
    :Instruccion(siguiente, CASO)
{
    this->expresion = expresion;
    this->listaDeCaso = listaDeCaso;
    this->instrucciones_sino = instrucciones_sino;
}

void InstruccionCaso::validarSemantica()
{

}
