#include "Programa/Programa.h"

Programa* Programa::instancia = 0;

Programa::Programa()
{
    this->tablaDeFunciones = new vector<DeclaracionDeFuncion*>();
    this->tablaDeVariables = new vector<VariableDeclarada*>();
    this->tablaDePuertosYSensores = new vector<DeclaracionUtilizar*>();
    this->tablaDeVariablesADeclarar = new vector<VariableADeclarar*>();

    this->tablaDeUsoDeFunciones = new map<string, Funcion*>();
    this->tablaDeUsoFuncionesXml = new map<string, string>();
    this->FuncionesLocales = new map<string, string>();
    this->codigoDefunciones = 0;

    this->tablaVariableFuncsLocales = 0;
    compilarParaNxt = true;
    puedoBuscarEnFuncionesXml = true;

    /*Instancia de los tipos*/
    this->tipoBooleano = new TipoBooleano();
    this->tipoCadena = new TipoCadena();
    this->tipoCaracter = new TipoCaracter();
    this->tipoEntero = new TipoEntero();
    this->tipoFlotante = new TipoFlotante();
    this->tipoArreglo = new TipoArreglo();
    this->tipoMotor = new TipoMotor();
    this->tipoSensorDeBrujula = new TipoSensorDeBrujula();
    this->tipoSensorDeColor = new TipoSensorDeColor();
    this->tipoSensorDeInclinacion = new TipoSensorDeInclinacion();
    this->tipoSensorDeLuz = new TipoSensorDeLuz();
    this->tipoSensorDeSonido = new TipoSensorDeSonido();
    this->tipoSensorDeTacto = new TipoSensorDeTacto();
    this->tipoSensorGiroscopico = new TipoSensorGiroscopico();
    this->tipoSensorUltrasonico = new TipoSensorUltrasonico();
    this->tipoBotonCentral = new TipoBotonCentral();
    this->tipoBotonDerecho = new TipoBotonDerecho();
    this->tipoBotonEscape = new TipoBotonEscape();
    this->tipoBotonIzquierdo = new TipoBotonIzquierdo();
    this->tipoFuncion = new TipoFuncion();
}

Programa* Programa::obtenerInstancia()
{
    if(!instancia)
    {
        instancia = new Programa();
//        instancia->cargarFuncionesIncorporadas();
  //      instancia->cargarCodigoFunciones();
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

TipoArreglo*  Programa::obtenerTipoArreglo()
{
    return this->tipoArreglo;
}

TipoMotor* Programa::obtenerTipoMotor()
{
    return this->tipoMotor;
}

TipoSensorDeBrujula* Programa::obtenerTipoSensorDeBrujula()
{
    return this->tipoSensorDeBrujula;
}

TipoSensorDeColor* Programa::obtenerTipoSensorDeColor()
{
    return this->tipoSensorDeColor;
}

TipoSensorDeInclinacion* Programa::obtenerTipoSensorDeInclinacion()
{
    return this->tipoSensorDeInclinacion;
}

TipoSensorDeLuz* Programa::obtenerTipoSensorDeLuz()
{
    return this->tipoSensorDeLuz;
}

TipoSensorDeSonido* Programa::obtenerTipoSensorDeSonido()
{
    return this->tipoSensorDeSonido;
}

TipoSensorDeTacto* Programa::obtenerTipoSensorDeTacto()
{
    return this->tipoSensorDeTacto;
}

TipoSensorGiroscopico* Programa::obtenerTipoSensorGiroscopico()
{
    return this->tipoSensorGiroscopico;
}

TipoSensorUltrasonico* Programa::obtenerTipoSensorUltrasonico()
{
    return this->tipoSensorUltrasonico;
}

TipoBotonCentral* Programa::obtenerTipoBotonCentral()
{
    return this->tipoBotonCentral;
}

TipoBotonDerecho* Programa::obtenerTipoBotonDerecho()
{
    return this->tipoBotonDerecho;
}

TipoBotonIzquierdo* Programa::obtenerTipoBotonIzquierdo()
{
    return this->tipoBotonIzquierdo;
}

TipoBotonEscape* Programa::obtenerTipoBotonEscape()
{
    return this->tipoBotonEscape;
}

TipoFuncion*    Programa::obtenerTipoFuncion()
{
    return this->tipoFuncion;
}

VariableDeclarada* Programa::existeVariable(string *identificador, int idDeExpresion)
{
    vector<VariableDeclarada*> *variables = Programa::obtenerInstancia()->tablaDeVariables;
    VariableDeclarada* ultimaVariable = 0;

    for(unsigned int i = 0 ; i< variables->size(); i++)
    {
        VariableDeclarada* variable = variables->at(i);
        /*mismo identificador y que posea un idDeExpresion menor al mio*/
        if( variable->obtenerVariable()->obtenerIdentificador()->compare( *identificador ) == 0 &&
            variable->obtenerIdDeExpresion() < idDeExpresion)
        {
            ultimaVariable = variable;
        }
    }

    return ultimaVariable;
}

DeclaracionDeFuncion* Programa::existeEnTablaDeFunciones(string *identificador, int idDeExpresion)
{
    for(unsigned int i = 0; i< tablaDeFunciones->size(); i++)
    {
        DeclaracionDeFuncion *declaracion = tablaDeFunciones->at(i);
        // #if linux
        if( identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
        {
            return declaracion;
        }
    }
    return 0;
}

DeclaracionDeFuncion* Programa::existeEnTablaDeFunciones(string *identificador, Lista *lista_parametros)
{
    for(unsigned int i = 0; i< tablaDeFunciones->size(); i++)
    {
        DeclaracionDeFuncion *declaracion = tablaDeFunciones->at(i);
        // #if linux
        if( identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
        {
            if( lista_parametros->lista->size() == declaracion->obtenerListaParametros()->lista->size())
            {
                return declaracion;
            }
        }
    }
    return 0;
}

bool Programa::existeEnTablaDeFuncionesIdentica(string *identificador, Lista *lista_parametros)
{
    for(unsigned int i = 0; i< tablaDeFunciones->size(); i++)
    {
        DeclaracionDeFuncion *declaracion = tablaDeFunciones->at(i);
        // #if linux
        if( identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
        {
            if( lista_parametros->lista->size() == declaracion->obtenerListaParametros()->lista->size())
            {
                return true;
            }
        }
    }
    return false;
}

DeclaracionUtilizar* Programa::existeEnTablaDePuertosYSensores(string *identificador)
{
    for(unsigned int i = 0; i< tablaDePuertosYSensores->size(); i++)
    {
        DeclaracionUtilizar *declaracion = tablaDePuertosYSensores->at(i);
        if(identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
        {
            return declaracion;
        }
    }
    return 0;
}

bool Programa::existePuerto(string *puerto)
{
    for(unsigned int i = 0; i< tablaDePuertosYSensores->size(); i++)
    {
        DeclaracionUtilizar *declaracion = tablaDePuertosYSensores->at(i);
        if(strcmpi(puerto->c_str(), declaracion->obtenerPuerto()->obtenerIdentificador()->c_str())==0)
        {
            return true;
        }
    }
    return false;
}

/*El primero es el id de expresion de la variable que quiero cambiar
    el segundo es el valor que le pondre
*/
void  Programa::establecerIdDeExpresionAVariable(int idExpresion, int idExpresionACambiar)
{
    for(unsigned int i = 0 ; i< this->tablaDeVariables->size(); i++)
    {
        VariableDeclarada* variable = this->tablaDeVariables->at(i);
        /*mismo identificador y que posea un idDeExpresion menor al mio*/
        if( variable->obtenerIdDeExpresion() == idExpresion)
        {
            variable->establecerIdDeExpresion(idExpresionACambiar);
        }
    }
}

void Programa::agregarVariableADeclarar(string *id, Tipo *t, int idExp)
{
    bool existe = false;
    for(unsigned int i = 0; i<this->tablaDeVariablesADeclarar->size(); i++)
    {
        VariableADeclarar *variable = this->tablaDeVariablesADeclarar->at(i);
        if(idExp == variable->id && t->tipo == variable->tipo->tipo)
        {
            existe = true;
            break;
        }
    }

    if( !existe )
    {
        this->tablaDeVariablesADeclarar->push_back(new VariableADeclarar(id, t, idExp));
    }
}

void Programa::limpiarInstancia()
{
    this->instancia = 0;
    delete instrucciones;
    delete tablaDeFunciones;
    delete tablaDePuertosYSensores;
    delete tablaDeVariables;
    delete tablaDeVariablesADeclarar;
    delete tipoBooleano;
    delete tipoCadena;
    delete tipoCaracter;
    delete tipoEntero;
    delete tipoFlotante;
    delete tipoArreglo;
    delete tipoMotor;
    delete tipoSensorDeBrujula;
    delete tipoSensorDeColor;
    delete tipoSensorDeInclinacion;
    delete tipoSensorDeLuz;
    delete tipoSensorDeSonido;
    delete tipoSensorDeTacto;
    delete tipoSensorGiroscopico;
    delete tipoSensorUltrasonico;
    delete tipoBotonCentral;
    delete tipoBotonDerecho;
    delete tipoBotonEscape;
    delete tipoBotonIzquierdo;
    delete funcionesIncorporadas;
    delete tablaDeUsoDeFunciones;
    delete codigoDefunciones;
}

string Programa::obtenerCodigoVariablesADeclarar()
{
    stringstream resultado;
    for(unsigned int i = 0; i<this->tablaDeVariablesADeclarar->size(); i++)
    {
        VariableADeclarar *variable = this->tablaDeVariablesADeclarar->at(i);
        Tipo *tipoVariable = variable->tipo;

        if( tipoVariable->tipo == Entero )
        {
            resultado << "public static int ";
            resultado << "$";
            resultado << variable->id;
            resultado << *variable->variable;
            resultado << "=0;";
        }

        if( tipoVariable->tipo == Flotante )
        {
            resultado << "public static float ";
            resultado << "$";
            resultado << variable->id;
            resultado << *variable->variable;
            resultado << "=0.0f;";
        }

        if( tipoVariable->tipo == Caracter)
        {
            resultado << "public static char ";
            resultado << "$";
            resultado << variable->id;
            resultado << *variable->variable;
            resultado << "=' ';";
        }

        if( tipoVariable->tipo == Cadena)
        {
            resultado << "public static String ";
            resultado << "$";
            resultado << variable->id;
            resultado << *variable->variable;
            resultado << "=\"\";";
        }

        if( tipoVariable->tipo == Booleano )
        {
            resultado << "public static boolean ";
            resultado << "$";
            resultado << variable->id;
            resultado << *variable->variable;
            resultado << "=false;";
        }

        resultado << "\n";
    }
    return resultado.str();
}

/*Cargas las funciones incorporadas en Legus*/
void Programa::cargarFuncionesIncorporadas()
{
    FuncionesIncorporadas fi;
    this->funcionesIncorporadas = fi.obtenerFuncionesIncorporadas();
}

void Programa::cargarCodigoFunciones()
{
    FuncionesIncorporadas fi;
    this->codigoDefunciones = fi.obtenerCodigoFunciones();
}

string Programa::obtenerCodigoFuente(string nombreArchivo,
                                     string inclusiones,
                                     string funcsIncorporadas,
                                     string declaracionFunciones,
                                     string bloqueCodigo)
{
    stringstream codigoFuente;
    codigoFuente << inclusiones;
    codigoFuente << "public class ";
    codigoFuente << nombreArchivo;
    codigoFuente << "{\n";
        // Agregar Sensores Declarados
        codigoFuente << obtenerCodigoSensoresDeclarados();
        codigoFuente << obtenerFuncionesXml();
        codigoFuente << obtenerCodigoVariablesADeclarar();
        codigoFuente << funcsIncorporadas;
        codigoFuente << "\n";
        codigoFuente << declaracionFunciones;

        codigoFuente << "public static void main(String args[]) throws Exception";
        codigoFuente << "{\n";
            codigoFuente << bloqueCodigo;
            codigoFuente << "\n";
        codigoFuente << "}\n";
    codigoFuente << "}\n";

    return codigoFuente.str();
}

string Programa::obtenerCodigoSensoresDeclarados()
{
    stringstream ss;
    // El nombreSera $$sensor#Puerto
    for(int i=0; i<tablaDePuertosYSensores->size(); i++)
    {
        DeclaracionUtilizar *utilizar = tablaDePuertosYSensores->at(i);
        ss << utilizar->obtenerCodigoDeclarar();
        ss << "\n";
    }
    return ss.str();
}

Funcion* Programa::existeFuncionIncorporada(string nombreFuncion, Lista *parametros)
{
    /*a minusculas*/
    transform(nombreFuncion.begin(), nombreFuncion.end(), nombreFuncion.begin(), ::tolower);

    // transformarlo a una entrada en la tabla
    string nombre = convertirAEntradaEnTabla(nombreFuncion, parametros);

    Funcion* encontrado = 0;
    if( funcionesIncorporadas->find(nombre) != funcionesIncorporadas->end())
    {
        /*Existe!*/
        Funcion* funcion = (*funcionesIncorporadas)[nombre];
        return funcion;
    }
    return encontrado;
}

Tipo* Programa::obtenerTipoEnBaseATipoParametro(TipoParametro tipoParam)
{
    if(tipoParam == TEntero)
    {
        return tipoEntero;
    }
    else if( tipoParam == TFlotante)
    {
        return tipoFlotante;
    }
    else if( tipoParam == TCadena)
    {
        return tipoCadena;
    }
    else if(tipoParam == TCaracter)
    {
        return tipoCaracter;
    }
    else if(tipoParam == TBooleano)
    {
        return tipoBooleano;
    }
    else if( tipoParam == TMotor)
    {
        return tipoMotor;
    }
    else if( tipoParam == TSensorDeBrujula)
    {
        return tipoSensorDeBrujula;
    }
    else if( tipoParam == TSensorDeColor)
    {
        return tipoSensorDeColor;
    }
    else if( tipoParam == TSensorDeInclinacion)
    {
        return tipoSensorDeInclinacion;
    }
    else if( tipoParam == TSensorDeLuz)
    {
        return tipoSensorDeLuz;
    }
    else if( tipoParam == TSensorDeSonido)
    {
        return tipoSensorDeSonido;
    }
    else if( tipoParam == TSensorDeTacto)
    {
        return tipoSensorDeTacto;
    }
    else if( tipoParam == TSensorGiroscopico)
    {
        return tipoSensorGiroscopico;
    }
    else if( tipoParam == TSensorUltrasonico)
    {
        return tipoSensorUltrasonico;
    }
    else if( tipoParam == TBotonDerecho)
    {
        return tipoBotonDerecho;
    }
    else if( tipoParam == TBotonCentral)
    {
        return tipoBotonCentral;
    }
    else if( tipoParam == TBotonIzquierdo)
    {
        return tipoBotonIzquierdo;
    }
    else if( tipoParam == TBotonEscape)
    {
        return tipoBotonEscape;
    }
    return 0;
}

string Programa::obtenerTipoEnBaseATipo(Tipo *tipo)
{
    if(tipo==tipoEntero)                    return "entero";
    else if(tipo==tipoArreglo)              return "arreglo";
    else if(tipo==tipoMotor)                return "motor";
    else if(tipo==tipoFlotante)             return "flotante";
    else if(tipo==tipoCadena)               return "cadena";
    else if(tipo==tipoCaracter)             return "caracter";
    else if(tipo==tipoBooleano)             return "booleano";
    else if(tipo==tipoSensorDeBrujula)      return "brujula";
    else if(tipo==tipoSensorDeColor)        return "color";
    else if(tipo==tipoSensorDeInclinacion)  return "inclinacion";
    else if(tipo==tipoSensorDeLuz)          return "luz";
    else if(tipo==tipoSensorDeSonido)       return "sonido";
    else if(tipo==tipoSensorDeTacto)        return "tacto";
    else if(tipo==tipoSensorGiroscopico)    return "giroscopico";
    else if(tipo==tipoSensorUltrasonico)    return "ultrasonico";
    else if(tipo==tipoBotonCentral)         return "boton_central";
    else if(tipo==tipoBotonDerecho)         return "boton_derecho";
    else if(tipo==tipoBotonEscape)          return "boton_escape";
    else if(tipo==tipoBotonIzquierdo)       return "boton_izquierdo";
    else if(tipo==tipoFuncion)              return "funcion";
    return "";
}

string Programa::obtenerTipoJavaEnBaseATipo(Tipo *tipo)
{
    if(tipo==tipoEntero)                    return " int ";
    else if(tipo==tipoMotor)                return " NXTRegulatedMotor ";
    else if(tipo==tipoFlotante)             return " float ";
    else if(tipo==tipoCadena)               return " String ";
    else if(tipo==tipoCaracter)             return " char ";
    else if(tipo==tipoBooleano)             return " boolean ";
    else if(tipo==tipoSensorDeBrujula)      return "";
    else if(tipo==tipoSensorDeColor)        return "";
    else if(tipo==tipoSensorDeInclinacion)  return "";
    else if(tipo==tipoSensorDeLuz)          return "";
    else if(tipo==tipoSensorDeSonido)       return "";
    else if(tipo==tipoSensorDeTacto)        return "";
    else if(tipo==tipoSensorGiroscopico)    return "";
    else if(tipo==tipoSensorUltrasonico)    return "";
    else if(tipo==tipoBotonCentral)         return " Button ";
    else if(tipo==tipoBotonDerecho)         return " Button ";
    else if(tipo==tipoBotonEscape)          return " Button ";
    else if(tipo==tipoBotonIzquierdo)       return " Button ";
    return "";
}

bool Programa::obtenerTipoDeCompilacion()
{
    return this->compilarParaNxt;
}

void Programa::agregarUsoDeFuncionATabla(string id, Lista *params, Funcion *funcion)
{
    string nombre = convertirAEntradaEnTabla(id, params);
    if( tablaDeUsoDeFunciones->find(nombre) == tablaDeUsoDeFunciones->end())
    {
        // No existe...
        (*tablaDeUsoDeFunciones)[nombre] = funcion;
    }
}

string Programa::convertirAEntradaEnTabla(string nombreFuncion, Lista *parametros)
{
    stringstream nfunc;
    stringstream params;
    nfunc << nombreFuncion;

    bool tieneParametros = false;
    for(int k = parametros->lista->size()-1; k>=0; k--)
    {
        Expresion *expr = parametros->lista->at(k);
        params << obtenerTipoEnBaseATipo(expr->validarSemantica());

        if(k!=0)
        {
            params << ",";
        }
        tieneParametros = true;
    }

    if(tieneParametros)
    {
        nfunc << "|";
    }
    nfunc << params.str();
    return nfunc.str();
}

string Programa::obtenerCodigoFunciones()
{
    stringstream codigoFuncs;
    map<string, Funcion*>::iterator it;
    for(it = tablaDeUsoDeFunciones->begin();
        it != tablaDeUsoDeFunciones->end();
        it++)
    {
        string codigo = (*it).first;

        if( this->codigoDefunciones != 0)
        {
            if(this->codigoDefunciones->find(codigo) != codigoDefunciones->end())
            {
                codigoFuncs << (*this->codigoDefunciones)[codigo];
                codigoFuncs << "\n";
            }
        }
    }
    return codigoFuncs.str();
}

void Programa::validarSemantica()
{
    Instruccion *actual = this->instrucciones;
    while(actual!=0)
    {
        actual->validarSemantica();
        actual = actual->obtenerSiguiente();
    }
}

void Programa::generarArchivo(string nombreArchivo)
{
    // Revisar si el codigo esta correcto
    validarSemantica();

    // Generar codigo para las funciones declaradas por el usuario
    // este codigo ya deberia estar Escrito en una tabla global

    // generar el archivo
    string codigoPrograma = obtenerCodigoFuente(nombreArchivo,
                                                obtenerInclusiones(),
                                                obtenerCodigoFunciones(),
                                                obtenerFuncionesLocales(),
                                                obtenerCodigoInstrucciones());

    ofstream archivo;
    string nombre = nombreArchivo + ".java";
    archivo.open(nombre.c_str());
        archivo << codigoPrograma.c_str();
    archivo.close();
}

void Programa::actualizarVariableArreglo(VariableArreglo *var)
{
    vector<VariableDeclarada*> *variables = tablaDeVariables;
    VariableDeclarada* ultimaVariable = 0;

    for(unsigned int i = 0 ; i< variables->size(); i++)
    {
        VariableDeclarada* variable = variables->at(i);
        /*mismo identificador y que posea un idDeExpresion menor al mio*/

        if( variable->obtenerVariable()->obtenerIdentificador()->compare( *var->obtenerIdentificador() ) == 0 )
        {
            ultimaVariable = variable;
        }
    }

    if(ultimaVariable != 0)
    {
        if( ultimaVariable->obtenerTipo()!=0)
        {
            if( ultimaVariable->obtenerTipo()->tipo == Arreglo)
            {
                ultimaVariable->establecerVariable(var);
            }
        }
    }

}

string Programa::obtenerFuncionesLocales()
{
    stringstream str;
    map<string, string>::iterator it;
    for(it = FuncionesLocales->begin();
        it != FuncionesLocales->end();
        it++)
    {
        string codigo = (*it).second;
        str << codigo;
    }
    return str.str();
}

string Programa::obtenerFuncionesXml()
{
    stringstream str;
    map<string, string>::iterator it;
    for(it = tablaDeUsoFuncionesXml->begin();
        it != tablaDeUsoFuncionesXml->end();
        it++)
    {
        string codigo = (*it).second;
        str << codigo;
        str << "\n";
    }
    return str.str();
}

void Programa::ingresarATablaDeFuncionesLocales(string nombreFunc, string codigo)
{
    if( FuncionesLocales->find(nombreFunc) == FuncionesLocales->end() )
    {
        // no existe ingresarlo
        (*FuncionesLocales)[nombreFunc] = codigo;
    }
    else
    {
        // Existe.. ¬¬ tenes que agregarlo, o cambia el formato de la llave
    }
}

string Programa::obtenerCodigoInstrucciones()
{
    string codigo="";
    Instruccion *actual = this->instrucciones;
    while(actual!=0)
    {
        codigo += actual->generarCodigoJava();
        actual = actual->obtenerSiguiente();
    }

    return codigo;
}

string Programa::obtenerInclusiones()
{
    stringstream ss;
    if(compilarParaNxt)
    {
        ss << "import lejos.nxt.*;\n";
        ss << "import lejos.util.*;\n";
        ss << "import java.util.ArrayList;\n";
        ss << "import java.lang.*;\n";
    }
    else
    {
        ss << "import java.util.*;\n";
    }

    return ss.str();
}

void Programa::eliminarTablaVariablesFuncsLocales()
{
    delete tablaVariableFuncsLocales;
    tablaVariableFuncsLocales = 0;
}

void Programa::establecerTablaVariablesFuncsLocales(Lista *parametros, Lista* p2)
{
    tablaVariableFuncsLocales = new vector<VariableDeclarada*>();
    for(int i=0; i<parametros->lista->size();i++)
    {
        Variable* var = (Variable*)parametros->lista->at(i);
        Expresion *t = p2->lista->at(i);
        tablaVariableFuncsLocales->push_back(new VariableDeclarada(var,t->tipoInferido, 0));
    }
}

VariableDeclarada* Programa::obtenerVDeclaradaVariablesFuncsLocales(string *id)
{
    for(int i=0; i<this->tablaVariableFuncsLocales->size(); i++)
    {
        VariableDeclarada* dclr = tablaVariableFuncsLocales->at(i);
        if(strcmpi(dclr->obtenerVariable()->obtenerIdentificador()->c_str(),id->c_str())==0)
        {
            return dclr;
        }
    }
    return 0;
}

void Programa::establecerCompilacionParaPc()
{
    this->compilarParaNxt = false;
    instancia->cargarFuncionesIncorporadas();
    instancia->cargarCodigoFunciones();
}

void Programa::establecerCompilacionParaNxt()
{
    this->compilarParaNxt = true;
    instancia->cargarFuncionesIncorporadas();
    instancia->cargarCodigoFunciones();
}

void Programa::actualizarVariableADeclarar(string *id, int idExp, Tipo *tipo)
{
    for(int i=0; i<this->tablaDeVariables->size(); i++)
    {
        VariableDeclarada* declr = this->tablaDeVariables->at(i);
        if( strcmpi( declr->obtenerVariable()->obtenerIdentificador()->c_str(), id->c_str())==0 &&
            idExp == declr->obtenerIdDeExpresion())
        {
            declr->establecerTipoDeExpresion(tipo);
        }
        (*tablaDeVariables)[i] = declr;
    }
    int x = 0;
    int s = x + 10;
}

Tipo* Programa::existeFuncionEnXmls(string nombrefuncion, Lista *listaParametros)
{
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir ("xml/")) != NULL)
    {
      while ((ent = readdir (dir)) != NULL)
      {
          if(strcmp(ent->d_name,".")!=0 && strcmp(ent->d_name,"..")!=0)
          {
             string archivo = "xml/";
             archivo += ent->d_name;
             Funcion *fun = funcionEnXml(archivo,nombrefuncion,listaParametros);
             if( fun != 0)
             {
                // ingresar a tabla de uso funciones xml
                if( this->tablaDeUsoFuncionesXml->find(nombrefuncion) == this->tablaDeUsoFuncionesXml->end())
                {
                    (*tablaDeUsoFuncionesXml)[nombrefuncion] = *fun->codigo;
                }
                return fun->tipoDeRetorno;
             }
          }
      }
      closedir (dir);
    }
    else
    {
        // Guardar estos mensajes en un log
    }
    return false;
}

Funcion* Programa::funcionEnXml(string archivo, string nombrefuncion,
                                Lista *listaParametros)
{
    Funcion *resultado = 0;
    TiXmlDocument doc(archivo.c_str());

    if(!doc.LoadFile()){cout << "error";return 0;}

    TiXmlHandle hDoc(&doc);

    TiXmlElement *raiz = doc.FirstChildElement();
    TiXmlElement *func, *params, *param, *codigo;
    string *cod;
    if(raiz)
    {
        func = raiz->FirstChildElement("funcion");
        while(func)
        {
            if( strcmpi(nombrefuncion.c_str(), func->Attribute("nombre"))==0 )
            {
                Tipo* tipoRetorno = obtenerTipoEnBaseTipoEnXml(func->Attribute("retorna"));

                //cout << func->Value() << endl;
                // solo deberia haber 1
                params = func->FirstChildElement("parametros");
                // varios parametros
                bool encaja = false;
                param = params->FirstChildElement("parametro");

                int indice = listaParametros->lista->size() - 1;
                vector<Tipo*> *vP = new vector<Tipo*>();
                while(param)
                {
                    vP->push_back( obtenerTipoEnBaseTipoEnXml(param->Attribute("tipo")) );
                    param = param->NextSiblingElement("parametro");
                }

                if( vP->size() == listaParametros->lista->size())
                {
                    int j = 0;
                    bool coincide = true;
                    for(int i=listaParametros->lista->size()-1; i>=0; i--)
                    {
                        Expresion *expr = listaParametros->lista->at(i);
                        if(expr->tipoInferido != vP->at(j) )
                        {
                            coincide = false;
                            break;
                        }
                        j++;
                    }
                    if(coincide)
                    {
                        encaja = true;
                    }
                }

                // solo deberia haber 1
                codigo = func->FirstChildElement("codigo");
                if( encaja )
                {
                    cod = new string();
                    (*cod) = "";
                    stringstream sss;
                    sss << codigo->GetText();
                    (*cod) += sss.str();
                    return new Funcion(tipoRetorno,obtenerVectorTipoParametro(vP),cod);
                }
            }
            func = func->NextSiblingElement("funcion");
        }
    }
    else
    {
        // Log
    }
    return resultado;
}

void Programa::establecerBusquedaEnFuncionesXml(bool valor)
{
    this->puedoBuscarEnFuncionesXml = valor;
}

Tipo* Programa::obtenerTipoEnBaseTipoEnXml(const char *texto)
{
    if( strcmpi(texto,"entero")==0)
    {
        return tipoEntero;
    }
    else if( strcmpi(texto,"cadena")==0)
    {
        return tipoCadena;
    }
    else if( strcmpi(texto,"caracter")==0)
    {
        return tipoCaracter;
    }
    else if( strcmpi(texto,"flotante")==0)
    {
        return tipoFlotante;
    }
    else if( strcmpi(texto,"booleano")==0)
    {
        return tipoBooleano;
    }
    else
    {
        return 0;
    }
}

vector<TipoParametro>* Programa::obtenerVectorTipoParametro(vector<Tipo *> *v)
{
    vector<TipoParametro>* vv = new vector<TipoParametro>();
    for(int i=0; i<v->size(); i++)
    {
        vv->push_back(parametroEnBaseATipo(v->at(i)));
    }
    return vv;
}

TipoParametro Programa::parametroEnBaseATipo(Tipo *t)
{
    if( t == tipoBooleano)
    {return TBooleano;}
    if( t == tipoEntero)
    {return TEntero;}
    if( t == tipoFlotante)
    {return TFlotante;}
    if( t == tipoCadena)
    {return TCadena;}
    if( t == tipoCaracter)
    {return TCaracter;}
}

