#include <iostream>
#include "Deposito.h"
using namespace std;

Deposito::Deposito() {
  _cantidad = 6;
  _articulos[0] = Articulo(20, "Monitor", 5000, 20);
  _articulos[1] = Articulo(35, "Celular", 1000, 5);
  _articulos[2] = Articulo(40, "Mouse", 500, 25);
  _articulos[3] = Articulo(50, "Camara", 1500, 20);
  _articulos[4] = Articulo(60, "Teclado", 2500, 30);
  _articulos[5] = Articulo(70, "Silla", 25000, 30);
}

int Deposito::buscar(int codigo) {
  for (int i = 0; i < _cantidad; i++) {
    if (_articulos[i].getCodigo() == codigo) {
      return i;
    }
  }
  return -1;
}

void Deposito::mostrar() {
  cout << endl;
  for (int i = 0; i < _cantidad; i++) {
    cout << "----------------------------" << endl;
    cout << "Articulo: #" << i + 1 << endl;
    cout << "Codigo: " << _articulos[i].getCodigo() << endl;
    cout << "Nombre: " << _articulos[i].getNombre() << endl;
    cout << "Precio: " << _articulos[i].getPrecio() << endl;
    cout << "Stock: " << _articulos[i].getStock() << endl;
  }
}

bool Deposito::descontarStock(int index, int cantidad) {
  return _articulos[index].descontarStock(cantidad);
}

Articulo Deposito::getArticulo(int index) {
  return _articulos[index];
}