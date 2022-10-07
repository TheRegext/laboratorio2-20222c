#pragma once
#include "Estudiante.h"
class EstudiantesArchivo
{
public:
  Estudiante leer(int nroRegistro);
  bool guardar(Estudiante est);
  bool guardar(Estudiante est, int nroRegistro);
  int getCantidad();
  int buscar(int legajo);
};

