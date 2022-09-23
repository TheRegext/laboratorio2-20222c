#include <iostream>
#include "ArrayNumerosDinamicos.h"
using namespace std;

int* crearArray(int cantidad)
{
  int* numeros = new int[cantidad];
  for (int i = 0; i < cantidad; i++)
  {
    numeros[i] = i;
  }
  return numeros;
}


int main() {
  ArrayNumerosDinamicos numeros;

  cout << sizeof(numeros) << endl;
  
  numeros.agregar(5);
  numeros.agregar(3);
  numeros.agregar(4);
  numeros.agregar(77);

  cout << sizeof(numeros) << endl;

  
  for (int i = 0; i < numeros.getTamanio(); i++)
  {
    cout << numeros.obtener(i) << endl;
  }

  int* vec = crearArray(10);


  for (int i = 0; i < 10; i++)
  {
    cout << vec[i] << endl;
  }
  
  return 0;
}


int main12() {

  // int *pNum = new int;
  //int vec[1000000]{1,2,3};


  int cantidad;
  cin >> cantidad;
  int* vec = new int[cantidad] {};

  if (vec != nullptr)
  {
    for (int i = 0; i < cantidad; i++)
    {
      cout << vec[i] << endl;
    }
  }
  delete vec;
  
  return 0;
}