#include "Programa.h"

Programa* Programa::instancia = 0;

Programa::Programa()
{
    this->tablaDeFunciones = new vector<DeclaracionDeFuncion*>();
    this->tablaDeVariables = new vector<VariableDeclarada*>();
    this->tablaDePuertosYSensores = new vector<DeclaracionUtilizar*>();

    /*Instancia de los tipos*/
    this->tipoBooleano = new TipoBooleano();
    this->tipoCadena = new TipoCadena();
    this->tipoCaracter = new TipoCaracter();
    this->tipoEntero = new TipoEntero();
    this->tipoFlotante = new TipoFlotante();
}

Programa* Programa::obtenerInstancia()
{
    if(!instancia)
    {
        instancia = new Programa();
    }
    return instancia;
}

TipoBooleano* Programa::obtenerTipoBooleano()
{
    return this->tipoBooleano;
}

TipoCadena* Programa::obtenerTipoCadena()
{
    return this->tipoCadena;
}

TipoCaracter* Programa::obtenerTipoCaracter()
{
    return this->tipoCaracter;
}

TipoEntero* Programa::obtenerTipoEntero()
{
    return this->tipoEntero;
}

TipoFlotante* Programa::obtenerTipoFlotante()
{
    return this->tipoFlotante;
}

