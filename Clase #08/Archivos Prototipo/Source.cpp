#include <iostream>
#include "Venta.h"
using namespace std;

int main() {
  int cantidad = 0;
  Venta venta;
  FILE* pFile;
    
  pFile = fopen("ventas.dat", "rb");
  
  if (pFile == nullptr) {
    cout << "Error al abrir el archivo" << endl;
    return 1;
  }

  fseek(pFile, 0, SEEK_END); // Mueve el cursor al final del archivo

  cantidad = ftell(pFile) / sizeof(Venta); // Obtiene la cantidad de registros

  cout << "Cantidad: " << cantidad << endl;
  
  /*
  cout << ftell(pFile) << endl;
  fread(&venta, sizeof(Venta), 1, pFile);
  cout << ftell(pFile) << endl;
  fread(&venta, sizeof(Venta), 1, pFile);
  cout << ftell(pFile) << endl;
  */
  /*
  while (fread(&venta, sizeof(Venta), 1, pFile)) {
    cantidad++;
  }

  cout << "Cantidad de ventas: " << cantidad << endl;
  */
  
  fclose(pFile);

  return 0;
}