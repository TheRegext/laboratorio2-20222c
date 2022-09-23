#pragma once
#include "Venta.h"

class ArchivoVentas
{
  FILE* abrirArchivo();
public:
  void guardar(Venta venta);
  bool guardar(Venta venta, int posicion);
  float totalRecaudado();
  int cantidadVentas();
  void obtenerVentas(Venta* ventas, int cantidad);
  Venta obtenerVenta(int posicion);

  int buscarPorCodigo(int codigo);
};

