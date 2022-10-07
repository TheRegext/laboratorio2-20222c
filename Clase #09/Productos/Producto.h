#pragma once
#include <string>

class Producto
{
private:
  int _codigo;
  float _precio;
  int _stock;
  char _nombre[50]; // usamos char por que esto representa la estructura de un archivo
  
public:
  Producto();
  int getCodigo();
  void setCodigo(int codigo);
  
  float getPrecio();
  void setPrecio(float precio);
  
  int getStock();
  
  void addStock(int stock);
  void subStock(int stock);
  
  std::string getNombre();
  void setNombre(std::string nombre);
  
  void cargar();
  void mostrar();
};

