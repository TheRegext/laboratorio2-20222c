#pragma once
#include "Articulo.h"
class Deposito
{
private:
  Articulo _articulos[6];
  int _cantidad;
public:
  Deposito();
  int buscar(int codigo);
  void mostrar();
  bool descontarStock(int index, int cantidad);
  Articulo getArticulo(int index);
  
};

