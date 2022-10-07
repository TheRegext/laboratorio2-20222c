#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto()
{
  _codigo = 0;
  _precio = 0;
  _stock = 0;
  strcpy(_nombre, "");
}

int Producto::getCodigo() {
  return _codigo;
}

void Producto::setCodigo(int codigo) {
  _codigo = codigo; 
}

float Producto::getPrecio() {
  return _precio;
}

void Producto::setPrecio(float precio) {
  _precio = precio; 
}

int Producto::getStock() {
  return _stock;
}

void Producto::addStock(int stock){
  if (stock > 0) {
    _stock += stock;
  }
}

void Producto::subStock(int stock){
  if (stock > 0) {
    _stock -= stock;
  }
}

std::string Producto::getNombre() {
  return _nombre;
}

void Producto::setNombre(std::string nombre){
  strcpy(_nombre, nombre.c_str());
}

void Producto::cargar() {
  cout << "------------------"<<endl;
  cout << "Ingrese nombre: ";
  cin >> _nombre;
  cout << "Ingrese precio: ";
  cin >> _precio;
  cout << "Ingrese stock: ";
  cin >> _stock;
}

void Producto::mostrar()
{
  cout << "------------------" << endl;
  cout << "Codigo: " << _codigo << endl;
  cout << "Nombre: " << _nombre << endl;
  cout << "Precio: " << _precio << endl;
  cout << "Stock: " << _stock << endl;
  cout << "------------------" << endl << endl;
}
