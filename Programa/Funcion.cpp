#include "Programa/Funcion.h"

Funcion::Funcion(Tipo *tipoDeRetorno, vector<TipoParametro> *parametros)
{
    this->tipoDeRetorno = tipoDeRetorno;
    this->parametros = parametros;
    this->codigo = new string();
}
