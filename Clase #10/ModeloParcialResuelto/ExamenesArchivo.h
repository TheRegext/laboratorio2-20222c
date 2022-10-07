#pragma once
#include "Examen.h"
class ExamenesArchivo
{
public:
  Examen leer(int nroRegistro);
  bool guardar(Examen est);
  bool guardar(Examen est, int nroRegistro);
  int getCantidad();
  int buscar(int id);   
};

