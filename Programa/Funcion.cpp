#include "Programa/Funcion.h"

Funcion::Funcion(Tipo *tipoDeRetorno, vector<TipoParametro> *parametros)
{
    this->tipoDeRetorno = tipoDeRetorno;
    this->parametros = parametros;
    this->codigo = new string();
}

Funcion::Funcion(Tipo *tipoDeRetorno, vector<TipoParametro> *parametros, string *codigo)
{
    this->tipoDeRetorno = tipoDeRetorno;
    this->parametros = parametros;
    this->codigo = codigo;
}
