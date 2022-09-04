#include <iostream>
#include "Alumno.h"

void Alumno::setNota(int nota)
{
  _nota = nota;
}

int Alumno::getNota()
{
  return _nota;
}

void Alumno::cargar()
{
  Persona::cargar();
  std::cout << "Ingrese la nota: ";
  std::cin >> _nota;
}
