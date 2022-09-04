#pragma once
#include <string>
class Persona
{
private:
  std::string _nombre;
  std::string _apellido;
  int _legajo;

public:
  void setNombre(std::string nombre);
  void setApellido(std::string apellido);
  void setLegajo(int legajo);
  
  std::string getNombre();
  std::string getApellido();
  int getLegajo();

  void cargar();

};

