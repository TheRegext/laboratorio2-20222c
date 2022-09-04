#include <iostream>
#include "Profesor.h"

Profesor::Profesor(std::string nombre, std::string apellido, std::string titulo)
{
  setNombre(nombre);
  setApellido(apellido);
  _titulo = titulo;
}

void Profesor::setTitulo(std::string titulo)
{
  _titulo = titulo;
}

std::string Profesor::getTitulo()
{
  return _titulo;
}

void Profesor::cargar()
{   
  Persona::cargar();
  std::cout << "Ingrese titulo: ";
  std::cin >> _titulo;
}
