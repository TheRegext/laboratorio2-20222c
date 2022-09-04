#pragma once
#include "Persona.h"
class Profesor : public Persona
{
private:
  std::string _titulo;
public:
  Profesor(std::string nombre, std::string apellido, std::string titulo);
  void setTitulo(std::string titulo);
  std::string getTitulo();

  void cargar();
};

