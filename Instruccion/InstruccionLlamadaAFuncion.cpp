#include "Instruccion/InstruccionLlamadaAFuncion.h"

InstruccionLlamadaAFuncion::InstruccionLlamadaAFuncion(string *identificador, Lista *lista_parametros, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente, LLAMADAAFUNCION, idDeExpresion)
{
    this->identificador = identificador;
    this->lista_parametros = lista_parametros;
}

void InstruccionLlamadaAFuncion::validarSemantica()
{
    /*
    Implementar lo de XML y Jar
        Hacer testing del jar en Lejos
     */

    /*DENTRO DE FUNCIONES DECLARADAS*/
    /*Ver si existe la funcion*/
    vector<DeclaracionDeFuncion*> *tablaDeFunciones = Programa::obtenerInstancia()->tablaDeFunciones;
    DeclaracionDeFuncion* funcionDeclarada = 0;
    bool encontrado = false;
    for(unsigned int i = 0; i< tablaDeFunciones->size(); i++)
    {
        DeclaracionDeFuncion *declaracion = tablaDeFunciones->at(i);
        if( this->identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
        {
            encontrado = true;
            /*Revisar la cantidad de parametros*/
            if( declaracion->obtenerListaParametros()->lista->size() != lista_parametros->lista->size() )
            {
                encontrado = false;
                stringstream error;
                error << "La funcion '";
                error << *this->identificador;
                error << "' ha sido llamada de manera incorrecta";
                throw(ExcepcionLegus(error.str()));
            }
            else
            {
                funcionDeclarada = declaracion;
            }
        }
    }

    /*DE LAS FUNCIONES BUILT-IN*/
    transform(this->identificador->begin(), this->identificador->end(), this->identificador->begin(), ::tolower);
    Funcion *fun = Programa::obtenerInstancia()->existeFuncionIncorporada(*this->identificador, this->lista_parametros);

    // true -> Funcion Existe
    encontrado = fun!=0;

    if( fun!=0 )
    {
        // Insertarlo a la tabla!
        Programa::obtenerInstancia()->agregarUsoDeFuncionATabla(*this->identificador, this->lista_parametros, fun);
    }

    if( !encontrado )
    {
        stringstream error;
        error << "No existe la funcion '";
        error << *this->identificador;
        error << "'";
        throw(ExcepcionLegus(error.str()));
    }

    if( obtenerSiguiente() != 0)
    {
        obtenerSiguiente()->validarSemantica();
    }

    /*Siempre revisar que sea distnto de nulo por si es incorporada*/
    if( funcionDeclarada != 0)
    {
        /*Primero ver si los parametros estan correctos! SHIET*/

        /*Segundo validar que las instrucciones esten correctas!*/
        Instruccion *instrucciones = funcionDeclarada->obtenerInstruccion();
        if( instrucciones != 0)
        {
            instrucciones->validarSemantica();
        }
    }
}

string InstruccionLlamadaAFuncion::generarCodigoJava()
{
    /*
        En la generacion Tener otra tabla extra de las funciones que
        si estan siendo utilizadas y con que paremtros se llaman.
    */
    stringstream codigo;
    codigo << *this->identificador;
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
    codigo << ");\n";

    if(obtenerSiguiente()!=0)
    {
        codigo << obtenerSiguiente()->generarCodigoJava();
    }

    return codigo.str();
}
