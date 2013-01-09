#include "Programa.h"

Programa* Programa::instancia = 0;

Programa::Programa()
{
    this->tablaDeFunciones = new vector<DeclaracionDeFuncion*>();
}

Programa* Programa::obtenerInstancia()
{
    if(!instancia)
    {
        instancia = new Programa();
    }
    return instancia;
}
