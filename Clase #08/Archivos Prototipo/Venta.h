#pragma once
class Venta
{
private:
  int _codigo;
  float _precio;
  int _cantidad;
public:
  Venta();
  
  int getCodigo();
  float getPrecio();
  int getCantidad();

  float getTotal();
  
  void cargar();
  void mostrar();
};

