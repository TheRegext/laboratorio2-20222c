#pragma once
class ArrayNumerosDinamicos
{
private:
  int* _numeros;
  int _cantidad;
public:
  ArrayNumerosDinamicos();
  ~ArrayNumerosDinamicos();
  void agregar(int n);
  int obtener(int pos);
  int getTamanio();
};

