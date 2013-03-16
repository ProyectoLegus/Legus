#include "Expresion/Variables/VariableFuncion.h"
#include "Programa/Programa.h"

VariableFuncion::VariableFuncion(string *identificador, Lista *lista_parametros, int numeroDeLinea, int idDeExpresion)
    :Variable(identificador, numeroDeLinea, idDeExpresion, FUNCION)
{
    this->lista_parametros = lista_parametros;
}

Lista* VariableFuncion::obtenerListaParametros()
{
    return this->lista_parametros;
}

Tipo* VariableFuncion::validarSemantica()
{
    /*2 casos, es declarada funcion local, o es funcion incorporada*/
    transform(obtenerIdentificador()->begin(), obtenerIdentificador()->end(), obtenerIdentificador()->begin(), ::tolower);
    Funcion *funcion = Programa::obtenerInstancia()->existeFuncionIncorporada(*obtenerIdentificador(), lista_parametros);

    if(funcion!=0)
    {
        /*Existe incorporarla a tabla de funciones utilizadas*/
        Programa::obtenerInstancia()->agregarUsoDeFuncionATabla(*obtenerIdentificador(), lista_parametros, funcion);
        return funcion->tipoDeRetorno;
    }

    // cambiar a declaracion que retorne la exacta cantidad de parametros  con el mismo nombre
    DeclaracionDeFuncion *funcDeclr = Programa::obtenerInstancia()->existeEnTablaDeFunciones(obtenerIdentificador(), obtenerListaParametros());

    if( funcDeclr != 0)
    {
       Tipo *tipo = funcDeclr->validarSemantica(obtenerIdentificador(), obtenerListaParametros());
       if( tipo == 0)
       {
           // no se puede asignar una variable
           stringstream ss;
           ss << "La funcion '";
           ss << *obtenerIdentificador();
           ss << "' no retorna valor, no puede ser utilizada de esta manera";
           throw(ExcepcionLegus(ss.str(),numeroDeLinea));
       }
       this->tipoInferido = tipo;
       return tipoInferido;
    }
    else
    {
        /*No esta ni en locales ni built-in, buscarlo en xml*/

        Tipo* agregado = Programa::obtenerInstancia()->existeFuncionEnXmls(*obtenerIdentificador(),this->lista_parametros);
        if( agregado )
        {
            this->tipoInferido = agregado;
            return this->tipoInferido;
        }

        // No existe la funcion que se quiere llamar
        stringstream ss;
        ss << "Funcion '";
        ss << *obtenerIdentificador();
        ss << "' no existe";
        throw(ExcepcionLegus(ss.str(),numeroDeLinea));
    }

    return 0;
}

string VariableFuncion::generarCodigoJava()
{
    stringstream codigo;
    string id = *this->obtenerIdentificador();
    transform(id.begin(), id.end(), id.begin(), ::tolower);

    codigo << id;
    codigo << "(";

    for( int i = this->lista_parametros->lista->size()-1; i >=0 ; i--)
    {
        Expresion *expresion = this->lista_parametros->lista->at(i);
        codigo << expresion->generarCodigoJava();

        if( i > 0 )
        {
            codigo << ", ";
        }
    }

    codigo << ") ";
    return codigo.str();
}
