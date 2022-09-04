#include <iostream>
#include "Persona.h"

void Persona::setNombre(std::string nombre)
{
  _nombre = nombre;
}

void Persona::setApellido(std::string apellido)
{
  _apellido = apellido;
}

void Persona::setLegajo(int legajo)
{
  _legajo = legajo;
}

std::string Persona::getNombre()
{
  return _nombre;
}

std::string Persona::getApellido()
{
  return _apellido;
}

int Persona::getLegajo()
{
  return _legajo;
}

void Persona::cargar()
{
  std::cout << "Ingrese nombre: ";
  std::cin >> _nombre;
  std::cout << "Ingrese apellido: ";
  std::cin >> _apellido;
  std::cout << "Ingrese legajo: ";
  std::cin >> _legajo;
}
