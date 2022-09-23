#include <iostream>
#include "Venta.h"

using namespace std;

Venta::Venta()
{
  _codigo = 0;
  _precio = 0;
  _cantidad = 0;
}

int Venta::getCodigo()
{
  return _codigo;
}

float Venta::getPrecio()
{
  return _precio;
}

int Venta::getCantidad()
{
  return _cantidad;
}

float Venta::getTotal()
{
  return _precio * _cantidad;
}

void Venta::cargar()
{
  cout << "Codigo: ";
  cin >> _codigo;
  cout << "Precio: ";
  cin >> _precio;
  cout << "Cantidad: ";
  cin >> _cantidad;
}

void Venta::mostrar()
{
  cout << "Codigo: " << _codigo << endl;
  cout << "Precio: " << _precio << endl;
  cout << "Cantidad: " << _cantidad << endl;
  cout << "Total: " << _precio * _cantidad << endl;
}

void Venta::modificar()
{
  cout << "Precio: ";
  cin >> _precio;
  cout << "Cantidad: ";
  cin >> _cantidad;
}