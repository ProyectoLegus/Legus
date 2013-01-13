    #include "InstruccionRepetir.h"

InstruccionRepetir::InstruccionRepetir(Expresion *cantidad, Instruccion *instrucciones, Instruccion *siguiente)
    :Instruccion(siguiente, REPETIR)
{
    this->cantidad = cantidad;
    this->instrucciones = instrucciones;
}

void InstruccionRepetir::validarSemantica()
{

}
