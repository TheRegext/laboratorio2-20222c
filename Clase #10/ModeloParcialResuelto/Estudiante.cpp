#include <cstring>
#include <iostream>
#include "Estudiante.h"

std::string Estudiante::getApellidos(){
    std::string apellidos;
    apellidos = _apellidos;
    return apellidos;
}

std::string Estudiante::getNombres(){
    std::string nombres(_nombres);
    return nombres;
}

std::string Estudiante::toString(){
    std::string cadena;
    cadena = std::to_string(_legajo) + "," + _apellidos + "," + _nombres + "," + _fnac.toString();
    return cadena;
}

int Estudiante::getLegajo(){
    return _legajo;
}

Fecha Estudiante::getFechaNacimiento(){
    return _fnac;
}

int Estudiante::getEdad(){
    Fecha actual;
    int edad = actual.getAnio() - _fnac.getAnio();

    if (actual.getMes() > _fnac.getMes()){
       return edad;
    }

    if (actual.getMes() == _fnac.getMes() && actual.getDia() >= _fnac.getDia()){
        return edad;
    }

    return edad -1;
}

void Estudiante::setApellidos(std::string apellidos){
    strcpy(_apellidos, apellidos.c_str());
}

void Estudiante::setNombres(std::string nombres){
    strcpy(_nombres, nombres.c_str());
}

void Estudiante::setLegajo(int legajo){
    _legajo = legajo;
}

void Estudiante::setFechaNacimiento(Fecha fnac){
    _fnac = fnac;
}