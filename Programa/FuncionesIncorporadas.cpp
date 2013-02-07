#include "FuncionesIncorporadas.h"

FuncionesIncorporadas::FuncionesIncorporadas()
{
}

map<string, vector<vector<TipoParametro>*>*> FuncionesIncorporadas::obtenerFuncionesIncorporadas()
{
    /*Tipos!*/

    map<string,vector< vector<TipoParametro>* >* > funcionesIncorporadas;

    /*Escriba!*/
    vector< vector<TipoParametro>* >* escriba = new vector< vector<TipoParametro>* >();
    escriba->push_back( obtenerVectorParametros(1, TEntero) );
    escriba->push_back( obtenerVectorParametros(1, TFlotante) );
    escriba->push_back( obtenerVectorParametros(1, TCaracter) );
    escriba->push_back( obtenerVectorParametros(1, TCadena) );
    escriba->push_back( obtenerVectorParametros(1, TBooleano) );

    funcionesIncorporadas["escriba"] = escriba;

    return funcionesIncorporadas;
}

vector<TipoParametro>* FuncionesIncorporadas::obtenerVectorParametros(int cantidadArgumentos, ...)
{
    vector<TipoParametro>* vect = new vector<TipoParametro>();
    va_list argumentos;

    va_start(argumentos, cantidadArgumentos);

    for(int i=0; i<cantidadArgumentos; i++)
    {
        /*Esta onda esta bien QtCreator es el loco*/
        int tParametro= va_arg(argumentos, int );
        vect->push_back((TipoParametro)tParametro);
    }
    va_end(argumentos);
    return vect;
}
