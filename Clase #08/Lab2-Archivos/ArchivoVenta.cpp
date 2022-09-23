#include <iostream>
#include "ArchivoVenta.h"
using namespace std;

void ArchivoVentas::guardar(Venta venta)
{
  FILE* pFile;
  pFile = fopen("ventas.dat", "ab");
  if (pFile == NULL)
  {
    exit(1550);
  }
  fwrite(&venta, sizeof(Venta), 1, pFile);
  fclose(pFile);
}

bool ArchivoVentas::guardar(Venta venta, int posicion)
{
  FILE* pFile;
  pFile = fopen("ventas.dat", "rb+");
  if (pFile == NULL){
    cout << "No se pudo abrir el archivo" << endl;
    exit(1550);
  }
  fseek(pFile, posicion * sizeof(Venta), SEEK_SET);
  fwrite(&venta, sizeof(Venta), 1, pFile);
  fclose(pFile);
  
  return true;
}

float ArchivoVentas::totalRecaudado()
{
  Venta venta;
  float total = 0;
  FILE* pFile = abrirArchivo();
  
  while (fread(&venta, sizeof(Venta), 1, pFile) == 1) {
    total += venta.getTotal();
  }

  fclose(pFile);

  return total;
}

int ArchivoVentas::cantidadVentas()
{
  int cantidad;
  FILE* pFile = abrirArchivo();

  fseek(pFile, 0, SEEK_END); // Mueve el cursor al final del archivo

  cantidad = ftell(pFile) / sizeof(Venta); // Obtiene la cantidad de registros

  fclose(pFile);

  return cantidad;
}

void ArchivoVentas::obtenerVentas(Venta* ventas, int cantidad)
{
  FILE* pFile = abrirArchivo();
  
  fread(ventas, sizeof(Venta), cantidad, pFile);
  
  fclose(pFile);
}

Venta ArchivoVentas::obtenerVenta(int posicion)
{
  Venta venta;
  FILE* pFile = abrirArchivo();
  
  fseek(pFile, posicion * sizeof(Venta), SEEK_SET);
  fread(&venta, sizeof(Venta), 1, pFile);
  fclose(pFile);

  return venta;
}

int ArchivoVentas::buscarPorCodigo(int codigo)
{
  int  i = 0;
  Venta venta;
  FILE * pFile = abrirArchivo();
  
  while (fread(&venta, sizeof(Venta), 1, pFile) == 1)
  {
    if (venta.getCodigo() == codigo)
    {
      fclose(pFile);
      return i;
    }
    i++;
  }

  fclose(pFile);
  return -1;
}

FILE* ArchivoVentas::abrirArchivo()
{
  FILE* pFile;
  pFile = fopen("ventas.dat", "rb");
  
  if (pFile == NULL){
    cout << "Error al abrir el archivo" << endl;
    exit(1550);
  }
  return pFile;
}
