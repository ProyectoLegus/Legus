#-------------------------------------------------
#
# Project created by QtCreator 2012-11-27T14:18:04
#
#-------------------------------------------------

QT       += core
QT       -= gui


TARGET = Legus

CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp\
        #Editor/editor.cpp \
        Bison_Flex/tokens.cpp \
        Bison_Flex/parser.cpp \
        Expresion/Expresion.cpp \
        Expresion/ExpresionBinaria/ExpresionBinaria.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaModulo.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaDivision.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaMultiplicacion.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaResta.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaSuma.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaExponenciacion.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaDivisionEntera.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaMayor.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaMenor.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaMayorIgual.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaMenorIgual.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaIgualdad.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaDistinto.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaY.cpp \
        Expresion/ExpresionBinaria/ExpresionBinariaO.cpp \
        Expresion/ExpresionLiteral/ExpresionLiteralBooleana.cpp \
        Expresion/ExpresionLiteral/ExpresionLiteralCaracter.cpp \
        Expresion/ExpresionLiteral/ExpresionLiteralFlotante.cpp \
        Expresion/ExpresionLiteral/ExpresionLiteralEntera.cpp \
        Expresion/ExpresionLiteral/ExpresionLiteralCadena.cpp \
        Expresion/ExpresionUnaria/ExpresionUnaria.cpp \
        Expresion/ExpresionUnaria/ExpresionUnariaNegacion.cpp \
        Expresion/ExpresionUnaria/ExpresionUnariaNegativo.cpp \
        Programa/Tipos/Tipo.cpp \
        Programa/Tipos/TipoBooleano.cpp \
        Programa/Tipos/TipoCaracter.cpp \
        Programa/Tipos/TipoFlotante.cpp \
        Programa/Tipos/TipoEntero.cpp \
        Programa/Tipos/TipoCadena.cpp \
        Programa/Tipos/TipoArreglo.cpp \
        Instruccion/Instruccion.cpp \
        Instruccion/InstruccionSi.cpp \
        Instruccion/InstruccionCaso.cpp \
        Instruccion/InstruccionMientras.cpp \
        Instruccion/InstruccionPara.cpp \
        Instruccion/InstruccionRepetir.cpp \
        Instruccion/InstruccionAsignacion.cpp \
        Instruccion/InstruccionRepitaDesde.cpp \
        Instruccion/InstruccionParaCada.cpp \
        Instruccion/InstruccionRepita.cpp \
        Instruccion/InstruccionLlamadaAFuncion.cpp \
        Instruccion/InstruccionRetornar.cpp \
        Instruccion/ListaDeCaso.cpp \
        Expresion/Variables/Variable.cpp \
        Expresion/Variables/VariableArreglo.cpp \
        Expresion/Variables/VariableFuncion.cpp \
        Expresion/Variables/VariableDeclarada.cpp \
        Expresion/Variables/VariablePuerto.cpp \
        Expresion/Variables/VariableSensor.cpp \
        Programa/TablaDeFunciones.cpp \
        Programa/DeclaracionDeFuncion.cpp \
        Programa/Programa.cpp \
        Programa/DeclaracionUtilizar.cpp \
        Programa/EntradaSimbolo.cpp \
        Programa/GeneradorDeErrores.cpp \
        Programa/ExcepcionLegus.cpp \
        Bison_Flex/Lista.cpp \
        Programa/VariableADeclarar.cpp \
        Expresion/ExpresionInstanciaDe.cpp \
        Programa/FuncionesIncorporadas.cpp \
        Programa/Funcion.cpp \
        Programa/Tipos/TipoMotor.cpp \
        Programa/Tipos/TipoSensorUltrasonico.cpp \
        Programa/Tipos/TipoSensorDeTacto.cpp \
        Programa/Tipos/TipoSensorDeLuz.cpp \
        Programa/Tipos/TipoSensorDeBrujula.cpp \
        Programa/Tipos/TipoSensorDeColor.cpp \
        Programa/Tipos/TipoSensorDeInclinacion.cpp \
        Programa/Tipos/TipoSensorDeSonido.cpp \
        Programa/Tipos/TipoSensorGiroscopico.cpp \
        Programa/FuncionUtilizada.cpp \
        Programa/Tipos/TipoBotonDerecho.cpp \
        Programa/Tipos/TipoBotonIzquierdo.cpp \
        Programa/Tipos/TipoBotonCentral.cpp \
        Programa/Tipos/TipoBotonEscape.cpp \
        Programa/Tipos/TipoFuncion.cpp \
    TinyXML/tinyxmlparser.cpp \
    TinyXML/tinyxmlerror.cpp \
    TinyXML/tinyxml.cpp \
    TinyXML/tinystr.cpp \
    ExpresionArreglo.cpp \
    InstruccionAsignacionArreglo.cpp
#        Programa/Tipos/TipoFuncion.cpp

#HEADERS  += Editor/editor.h \
 HEADERS  +=        Bison_Flex/tokens.h \
        Bison_Flex/parser.h \
        Expresion/Expresion.h \
        Expresion/ExpresionBinaria/ExpresionBinaria.h \
        Expresion/ExpresionBinaria/ExpresionBinariaModulo.h \
        Expresion/ExpresionBinaria/ExpresionBinariaDivision.h \
        Expresion/ExpresionBinaria/ExpresionBinariaMultiplicacion.h \
        Expresion/ExpresionBinaria/ExpresionBinariaResta.h \
        Expresion/ExpresionBinaria/ExpresionBinariaSuma.h \
        Expresion/ExpresionBinaria/ExpresionBinariaExponenciacion.h \
        Expresion/ExpresionBinaria/ExpresionBinariaDivisionEntera.h \
        Expresion/ExpresionBinaria/ExpresionBinariaMayor.h \
        Expresion/ExpresionBinaria/ExpresionBinariaMenor.h \
        Expresion/ExpresionBinaria/ExpresionBinariaMayorIgual.h \
        Expresion/ExpresionBinaria/ExpresionBinariaMenorIgual.h \
        Expresion/ExpresionBinaria/ExpresionBinariaIgualdad.h \
        Expresion/ExpresionBinaria/ExpresionBinariaDistinto.h \
        Expresion/ExpresionBinaria/ExpresionBinariaY.h \
        Expresion/ExpresionBinaria/ExpresionBinariaO.h \
        Expresion/ExpresionLiteral/ExpresionLiteralBooleana.h \
        Expresion/ExpresionLiteral/ExpresionLiteralCaracter.h \
        Expresion/ExpresionLiteral/ExpresionLiteralFlotante.h \
        Expresion/ExpresionLiteral/ExpresionLiteralEntera.h \
        Expresion/ExpresionLiteral/ExpresionLiteralCadena.h \
        Expresion/ExpresionUnaria/ExpresionUnaria.h \
        Expresion/ExpresionUnaria/ExpresionUnariaNegacion.h \
        Expresion/ExpresionUnaria/ExpresionUnariaNegativo.h \
        Programa/Tipos/Tipo.h \
        Programa/Tipos/TipoBooleano.h \
        Programa/Tipos/TipoCaracter.h \
        Programa/Tipos/TipoFlotante.h \
        Programa/Tipos/TipoEntero.h \
        Programa/Tipos/TipoCadena.h \
        Programa/Tipos/TipoArreglo.h \
        Instruccion/Instruccion.h \
        Instruccion/InstruccionSi.h \
        Instruccion/InstruccionCaso.h \
        Instruccion/InstruccionMientras.h \
        Instruccion/InstruccionPara.h \
        Instruccion/InstruccionRepetir.h \
        Instruccion/InstruccionAsignacion.h \
        Instruccion/InstruccionRepitaDesde.h \
        Instruccion/InstruccionParaCada.h \
        Instruccion/InstruccionRepita.h \
        Instruccion/InstruccionLlamadaAFuncion.h \
        Instruccion/InstruccionRetornar.h \
        Instruccion/ListaDeCaso.h \
        Expresion/Variables/Variable.h \
        Expresion/Variables/VariableArreglo.h \
        Expresion/Variables/VariableFuncion.h \
        Expresion/Variables/VariablePuerto.h \
        Expresion/Variables/VariableSensor.h \
        Expresion/Variables/VariableDeclarada.h \
        Programa/TablaDeFunciones.h \
        Programa/DeclaracionDeFuncion.h \
        Programa/Programa.h \
        Programa/DeclaracionUtilizar.h \
        Programa/EntradaSimbolo.h \
        Programa/GeneradorDeErrores.h \
        Programa/ExcepcionLegus.h \
        Bison_Flex/Lista.h \
        Bison_Flex/ParserImports.h \
        Programa/VariableADeclarar.h \
        Expresion/ExpresionInstanciaDe.h \
        Programa/FuncionesIncorporadas.h \
        Programa/Funcion.h \
        Programa/Tipos/TipoMotor.h \
        Programa/Tipos/TipoSensorUltrasonico.h \
        Programa/Tipos/TipoSensorDeTacto.h \
        Programa/Tipos/TipoSensorDeLuz.h \
        Programa/Tipos/TipoSensorDeBrujula.h \
        Programa/Tipos/TipoSensorDeColor.h \
        Programa/Tipos/TipoSensorDeInclinacion.h \
        Programa/Tipos/TipoSensorDeSonido.h \
        Programa/Tipos/TipoSensorGiroscopico.h \
        Programa/FuncionUtilizada.h \
        Programa/Tipos/TipoBotonDerecho.h \
        Programa/Tipos/TipoBotonIzquierdo.h \
        Programa/Tipos/TipoBotonCentral.h \
        Programa/Tipos/TipoBotonEscape.h \
        Programa/Tipos/TipoFuncion.h \
    TinyXML/tinyxml.h \
    TinyXML/tinystr.h \
    ExpresionArreglo.h \
    InstruccionAsignacionArreglo.h
#        Programa/Tipos/TipoFuncion.h

#FORMS    += Editor/editor.ui

OTHER_FILES += Bison_Flex/parser.y \
               Bison_Flex/tokens.l
