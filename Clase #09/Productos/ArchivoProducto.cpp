#include "ArchivoProducto.h"
#include <iostream>
using namespace std;


Producto ArchivoProducto::guardar(Producto producto)
{
  FILE* pFile;

  producto.setCodigo(generarCodigo());

  pFile = fopen("productos.dat", "ab");
  
  if (pFile == nullptr) {
    cout << "Error al abrir el archivo" << endl;
    exit(1552);
  }

  fwrite(&producto, sizeof(Producto), 1, pFile);

  fclose(pFile);

  return producto;
}

int ArchivoProducto::generarCodigo()
{
  return cantidadProductos() + 1;
}

int ArchivoProducto::cantidadProductos()
{
  FILE* pFile;
  int cantidad = 0;
  Producto producto;

  pFile = fopen("productos.dat", "rb");

  if (pFile == nullptr) {
    return 0;
  }

  fseek(pFile, 0, SEEK_END);
  cantidad = ftell(pFile) / sizeof(Producto);

  fclose(pFile);

  return cantidad;
}

void ArchivoProducto::leerProductos(Producto productos[], int cantidad)
{
  FILE* pFile;
  pFile = fopen("productos.dat", "rb");
  if (pFile == nullptr) {
    return;
  }
  
  fread(productos, sizeof(Producto), cantidad, pFile);

  fclose(pFile);
}
