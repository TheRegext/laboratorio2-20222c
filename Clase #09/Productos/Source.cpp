#include <iostream>
#include "Producto.h"
#include "ArchivoProducto.h"

using namespace std;


// ordene el vector de productos por el nombre
void ordenarProductos(Producto productos[], int cantidad) {
  Producto aux;
  for (int i = 0; i < cantidad - 1; i++) {
    for (int j = i + 1; j < cantidad; j++) {
      if (productos[i].getNombre() > productos[j].getNombre()) {
        aux = productos[i];
        productos[i] = productos[j];
        productos[j] = aux;
      }
    }
  }
}

int main() {
  int option;
  ArchivoProducto archivoProducto;

  do {
    cout << "1. Cargar producto" << endl;
    cout << "2. Listar productos" << endl;
    cout << "-------------------" << endl;
    cout << "0. Salir" << endl;
    cout << "-------------------" << endl;
    
    cout << "Ingrese una opcion: ";
    cin >> option;
    
    switch (option) {
    case 1:
    {
      cout << "Cargar producto" << endl;
      Producto producto;

      producto.cargar();

      cout << "Codigo de Producto: " << archivoProducto.guardar(producto).getCodigo() << endl;
      
    }
      break;
    case 2:
    {
      system("cls");
      cout << "Listar productos" << endl;
      int cantidad = archivoProducto.cantidadProductos();
      Producto* productos = new Producto[cantidad];
      
      archivoProducto.leerProductos(productos, cantidad);

      ordenarProductos(productos, cantidad);

      for (int i = 0; i < cantidad; i++) {
        productos[i].mostrar();
      }

      delete[] productos;

      system("pause");
      
    }
      break;
    case 0:
      cout << "Salir" << endl;
      break;
    default:
      cout << "Opcion invalida" << endl;
      break;
    }
    
  } while (option != 0);
  

  
  
  return 0;
}