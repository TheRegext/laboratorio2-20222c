#pragma once
#include <string>
// using namespace std;

class Articulo
{
private:
  int _codigo;
  std::string _nombre;
  float _precio;
  int _stock;
  
public:
  Articulo();
  Articulo(int codigo, std::string nombre, float precio, int stock);
  bool descontarStock(int stock);
  
  int getStock();
  float getPrecio();
  std::string getNombre();
  int getCodigo();
};

