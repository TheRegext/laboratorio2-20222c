#include <iostream>
#include "Alumno.h"

Alumno::Alumno() {
  _legajo = 0;
  _nombre = "";
}

Alumno::Alumno(int legajo, std::string nombre)
{
  _legajo = legajo;
  _nombre = nombre;
}


int Alumno::getLegajo()
{
  return _legajo;
}

std::string Alumno::getNombre()
{
  return _nombre;
} 

void Alumno::setLegajo(int legajo)
{
  _legajo = legajo;
}

void Alumno::setNombre(std::string nombre)
{
  _nombre = nombre;
}

void Alumno::cargar()
{
  std::cout << "Ingrese legajo: ";
  std::cin >> _legajo;
  std::cout << "Ingrese nombre: ";
  std::cin >> _nombre;
}

void Alumno::mostrar()
{
  std::cout << "-------------------------------------" << std::endl;
  std::cout << "Legajo: " << _legajo << std::endl;
  std::cout << "Nombre: " << _nombre << std::endl;
}

