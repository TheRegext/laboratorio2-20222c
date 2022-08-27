#include "Articulo.h"
Articulo::Articulo() {
  _codigo = 0;
  _nombre = "";
  _precio = 0;
  _stock = 0;
}

Articulo::Articulo(int codigo, std::string nombre, float precio, int stock)
{
  _codigo = codigo;
  _nombre = nombre;
  _precio = precio;
  _stock = stock;
}

bool Articulo::descontarStock(int stock)
{
  if (stock > 0 && _stock >= stock){
    _stock -= stock;
    return true;
  }
  
  return false;
}

int Articulo::getStock()
{
  return _stock;
}

float Articulo::getPrecio()
{
  return _precio;
}

std::string Articulo::getNombre() {
  return _nombre;
}

int Articulo::getCodigo() {
  return _codigo;
}