#include "Programa/DeclaracionDeFuncion.h"
#include "Instruccion/InstruccionRetornar.h"

DeclaracionDeFuncion::DeclaracionDeFuncion(Variable *variable, Lista *lista_parametros,
                                           Instruccion *instrucciones, int numeroDeLinea)
{
    this->variable = variable;
    this->lista_parametros = lista_parametros;
    this->instrucciones = instrucciones;
    /*Revisar que este nombre no exista ya!*/
    bool existe = Programa::obtenerInstancia()->existeEnTablaDeFuncionesIdentica(variable->obtenerIdentificador(), lista_parametros);

    if( existe ) // existe otra funcion con este nombre y tiene misma cantidad de parametros
    {
        // revisar todos, si tiene la misma can
        stringstream ss;
        ss << "El nombre '";
        ss << *variable->obtenerIdentificador();
        ss << "' ya esta siendo utilizado por otra funcion";
        throw(ExcepcionLegus(ss.str(),numeroDeLinea));
    }
    this->tipoDevolucionFuncion = 0;
}

Variable* DeclaracionDeFuncion::obtenerVariable()
{
    return this->variable;
}

Lista* DeclaracionDeFuncion::obtenerListaParametros()
{
    return this->lista_parametros;
}

Instruccion* DeclaracionDeFuncion::obtenerInstruccion()
{
    return this->instrucciones;
}

string DeclaracionDeFuncion::obtenerCodigoDeFuncion(Lista *lista_de_parametros)
{
    stringstream codigoFuncion;
    codigoFuncion << "public static ";
    /*Averiguar cual es el tipo de retorno de la funcion*/

    codigoFuncion << *this->variable->obtenerIdentificador();
    codigoFuncion << "(";
    /*PONER LO PARAMETROS*/
    codigoFuncion << ")\n";
    codigoFuncion << "{\n";
    codigoFuncion << "}\n";
    return codigoFuncion.str();
}

Tipo* DeclaracionDeFuncion::validarSemantica(string *id, Lista *lista_params)
{
    /*Validar su semantica, para evaluar tipos y poder
        evaluar valores de retorno
        Asignar los tipos a los parametros dentro de la funcion
            Revisar que la cantidad de parametros sea igual
        */
    if( obtenerListaParametros()->lista->size() !=
        lista_params->lista->size())
    {
        throw(ExcepcionLegus("Error llamada a funcion con mala cantidad de parametros",numeroDeLinea));
    }

    // actualizar a tabla de funciones locales
    Programa::obtenerInstancia()->establecerTablaVariablesFuncsLocales(obtenerListaParametros(), lista_params);
    Instruccion *instrucciones = obtenerInstruccion();
    if(instrucciones!=0)
    {
        instrucciones->validarSemantica();
        if( instrucciones->obtenerSiguiente() != 0)
        {
            instrucciones->obtenerSiguiente()->validarSemantica();
        }
    }
    // Eliminar Tabla funciones locales
    Programa::obtenerInstancia()->tablaVariableFuncsLocales = 0;

    /*Todo esta bien? ahora revisar que haya por lo menos 1 return
        si hay mas de 1, todos los return deben tener el mismo tipo
    */
    Instruccion *actual = instrucciones;
    Tipo* tipoDevolucion = 0;
    while( actual != 0)
    {
        Tipo* tRet = obtenerTipoRetornar(actual);
        if(tRet != 0)
        {
            if( tipoDevolucion == 0)
            {
                tipoDevolucion = tRet;
            }
            else
            {
                if( tipoDevolucion != tRet)
                {
                    stringstream ss;
                    ss << "En llamada a Funcion '";
                    ss << *id;
                    ss << "' las llamadas a la instruccion Retornar deben devolver el mismo tipo.";
                    throw(ExcepcionLegus(ss.str(),numeroDeLinea));
                }
            }
        }
        /*Debe ser una busqueda recursiva!!!!*/
        /*if(actual->obtenerTipo() == RETORNAR)
        {
            InstruccionRetornar *instrRet = (InstruccionRetornar*) actual;
            if( tipoDevolucion == 0)
            {
                //*Es el primer return!/
                tipoDevolucion = instrRet->obtenerTipoDeRetorno();
            }
            else
            {
                if( tipoDevolucion != instrRet->obtenerTipoDeRetorno())
                {
                    stringstream ss;
                    ss << "En llamada a Funcion '";
                    ss << *id;
                    ss << "' las llamadas a la instruccion Retornar deben devolver el mismo tipo.";
                    throw(ExcepcionLegus(ss.str()));
                }
            }
        }*/
        actual = actual->obtenerSiguiente();
    }
    this->tipoDevolucionFuncion = tipoDevolucion;
    // Antes de devolver, llamar a GenerarCodigoJava Para que
    // Ingrese el codigo globalMente
    string codigo = generarCodigoJava(lista_params);

    stringstream nombreFunc;
    nombreFunc << *obtenerVariable()->obtenerIdentificador();
    nombreFunc << "|";
    nombreFunc << convertirAEntraFuncLocl(lista_params);
    Programa::obtenerInstancia()->ingresarATablaDeFuncionesLocales(nombreFunc.str(), codigo);
    return this->tipoDevolucionFuncion;
}

string DeclaracionDeFuncion::generarCodigoJava(Lista *listaParams)
{
    stringstream codigoFuncion;
    codigoFuncion << "public static";
    if( this->tipoDevolucionFuncion == 0)
    {
        codigoFuncion << " void ";
    }
    else
    {
        codigoFuncion << Programa::obtenerInstancia()->obtenerTipoJavaEnBaseATipo(this->tipoDevolucionFuncion);
    }

    codigoFuncion << *obtenerVariable()->obtenerIdentificador();
    codigoFuncion << "(";
    for(int k=obtenerListaParametros()->lista->size()-1; k>=0; k--)
    {
        Expresion* tip = listaParams->lista->at(k);
        Variable* nombre = (Variable*)obtenerListaParametros()->lista->at(k);

        codigoFuncion << Programa::obtenerInstancia()->obtenerTipoJavaEnBaseATipo(tip->tipoInferido);
        codigoFuncion << " ";
        codigoFuncion << *nombre->obtenerIdentificador();
        if( k > 0)
        {
            codigoFuncion << ",";
        }
    }
    codigoFuncion << ")\n{\n";

    Instruccion *actual = obtenerInstruccion();
    while( actual != 0)
    {
        codigoFuncion << actual->generarCodigoJava();
        actual = actual->obtenerSiguiente();
    }

    codigoFuncion << "\n}\n";

    return codigoFuncion.str();
}

Tipo* DeclaracionDeFuncion::obtenerTipoRetornar(Instruccion *instr)
{
    if( instr->obtenerTipo() == RETORNAR)
    {
        InstruccionRetornar* instRet = (InstruccionRetornar*)instr;
        return instRet->obtenerTipoDeRetorno();
    }
    else if( instr->obtenerSiguiente() == 0)
    {
        return 0;
    }
    else
    {
        if( instr->obtenerSiguiente() != 0)
        {
            return obtenerTipoRetornar(instr->obtenerSiguiente());
        }
    }
}

string DeclaracionDeFuncion::convertirAEntraFuncLocl(Lista *ll)
{
    stringstream ss;

    for(int k=ll->lista->size()-1; k>=0; k--)
    {
        Expresion *tip = ll->lista->at(k);
        ss << Programa::obtenerInstancia()->obtenerTipoJavaEnBaseATipo(tip->tipoInferido);

        if( k>0)
        {
            ss << ",";
        }
    }

    return ss.str();
}
