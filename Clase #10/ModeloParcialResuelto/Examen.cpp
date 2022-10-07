#include <iostream>
#include <string>
#include "Examen.h"

using namespace std;

int Examen::getID(){
   return _id;
}

int Examen::getLegajo(){
   return _legajo;
}

int Examen::getIDMateria(){
   return _idmateria;
}

Fecha Examen::getFecha(){
   return _fecha;
}

float Examen::getNota(){
   return _nota;
}

void Examen::setID(int ID){
   _id = ID;
}

void Examen::setLegajo(int legajo){
   _legajo = legajo;
}

void Examen::setIDMateria(int IDMateria){
   _idmateria = IDMateria;
}

void Examen::setFecha(Fecha fecha){
   _fecha = fecha;
}

void Examen::setNota(float nota){
   _nota = nota;
}

std::string Examen::toString(){
    std::string cadena;
    cadena = std::to_string(_id) + "," + std::to_string(_legajo) + "," + std::to_string(_idmateria) + "," + _fecha.toString() + "," + std::to_string(_nota);
    return cadena;
}

