#pragma once
#include "Producto.h"

class ArchivoProducto
{
public:
  Producto guardar(Producto producto);
  int generarCodigo();
  int cantidadProductos();
  void leerProductos(Producto productos[], int cantidad);
};

