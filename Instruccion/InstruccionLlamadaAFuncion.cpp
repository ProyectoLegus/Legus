#include "Instruccion/InstruccionLlamadaAFuncion.h"

InstruccionLlamadaAFuncion::InstruccionLlamadaAFuncion(string *identificador, Lista *lista_parametros,
                                                       Instruccion *siguiente, int idDeExpresion, int numeroDeLinea)
    :Instruccion(siguiente, LLAMADAAFUNCION, idDeExpresion, numeroDeLinea)
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
    DeclaracionDeFuncion* funcionDeclarada = Programa::obtenerInstancia()->existeEnTablaDeFunciones(this->identificador, lista_parametros);
    bool encontrado = false;

    if( funcionDeclarada )
    {
        funcionDeclarada->validarSemantica(this->identificador, lista_parametros);
        encontrado = true;
    }

    /*DE LAS FUNCIONES BUILT-IN*/
    transform(this->identificador->begin(), this->identificador->end(), this->identificador->begin(), ::tolower);
    Funcion *fun = Programa::obtenerInstancia()->existeFuncionIncorporada(*this->identificador, this->lista_parametros);

    // true -> Funcion Existe
    if( !encontrado ) // Validar que no se haya encontrado ya en las locales
    {
        encontrado = fun!=0;
    }

    if( fun!=0 )
    {
        // Insertarlo a la tabla!
        Programa::obtenerInstancia()->agregarUsoDeFuncionATabla(*this->identificador, this->lista_parametros, fun);
    }

    /*No esta ni en locales ni built-in, buscarlo en xml*/

    Tipo *agregado = Programa::obtenerInstancia()->existeFuncionEnXmls(*this->identificador,this->lista_parametros);

    if( agregado )
    {
        encontrado = true;
    }

    if( !encontrado )
    {
        stringstream error;
        error << "No existe llamada a funcion '";
        error << *this->identificador;
        error << "' con los parametros(";
            /*Lista de los parametros */

        error << parametrosATipos();
        error << ")";
        throw(ExcepcionLegus(error.str(),numeroDeLinea));
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
    transform((*this->identificador).begin(), (*this->identificador).end(), (*this->identificador).begin(), ::tolower);
    codigo << *this->identificador;
    codigo << "(";

    for( int i = this->lista_parametros->lista->size()-1; i >=0 ; i--)
    {
        Expresion *expresion = this->lista_parametros->lista->at(i);
        codigo << expresion->generarCodigoJava();

        if( i > 0 )
        {
            Expresion *exp = this->lista_parametros->lista->at(i-1);
            if( exp->tipoInferido != Programa::obtenerInstancia()->obtenerTipoFuncion())
            {
                codigo << ", ";
            }
        }
    }
    codigo << ");\n";

    return codigo.str();
}

string InstruccionLlamadaAFuncion::parametrosATipos()
{
    stringstream ss;
    for(int k=this->lista_parametros->lista->size()-1; k>=0 ;k--)
    {
        Expresion *expr = lista_parametros->lista->at(k);
        ss << Programa::obtenerInstancia()->obtenerTipoEnBaseATipo(expr->tipoInferido);

        if( k > 0)
        {
            ss << ",";
        }
    }
    return ss.str();
}
