#include "ArrayNumerosDinamicos.h"

ArrayNumerosDinamicos::ArrayNumerosDinamicos()
{
  _cantidad = 0;
  _numeros = nullptr;
}

ArrayNumerosDinamicos::~ArrayNumerosDinamicos()
{
  if (_numeros != nullptr) {
    delete _numeros;
  }
}

void ArrayNumerosDinamicos::agregar(int n)
{
  int* pBuffer;
  pBuffer = new int[_cantidad+1];
  
  for (int i = 0; i < _cantidad; i++) {
    pBuffer[i] = _numeros[i];
  }
  
  pBuffer[_cantidad] = n;

  if (_numeros != nullptr) {
    delete _numeros;
  }
  
  _numeros = pBuffer;
  
  _cantidad++;
}

int ArrayNumerosDinamicos::obtener(int pos)
{
  return _numeros[pos];
}

int ArrayNumerosDinamicos::getTamanio()
{
  return _cantidad;
}
