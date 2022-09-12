#pragma once
#include <string>
class Alumno
{
private:
  int _legajo;
  std::string _nombre;
  
public:
  Alumno();
  Alumno(int legajo, std::string nombre);
  int getLegajo();
  std::string getNombre();
  void setLegajo(int legajo);
  void setNombre(std::string nombre);

  void cargar();
  void mostrar();
};

