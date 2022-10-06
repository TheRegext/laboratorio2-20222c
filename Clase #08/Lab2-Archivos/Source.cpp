#include <iostream>
#include "Venta.h"
#include "ArchivoVenta.h"
using namespace std;

int main() {

  int opcion;
  ArchivoVentas archivoVenta;
  Venta venta;

  do {
    cout << endl;
    cout << endl;
    cout << "1. Cargar Venta" << endl;
    cout << "2. Mostrar total recaudado" << endl;
    cout << "3. Mostrar Ventas" << endl;
    cout << "4. Mostrar Ventas V2" << endl;
    cout << "5. Buscar por Codigo" << endl;
    cout << "6. Modificar Venta" << endl;
    cout << "----------------------------" << endl;
    cout << "0. Salir" << endl;
    cout << "----------------------------" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion) {
    case 1:
      // cargar venta
      venta.cargar();

      archivoVenta.guardar(venta);

      break;
    case 2:
      // mostrar total recaudado
      cout << "Recaudacion total: " << archivoVenta.totalRecaudado() << endl;

      break;
    case 3:
    {
      int cantidadVentas = archivoVenta.cantidadVentas();
      Venta* ventas = new Venta[cantidadVentas];

      archivoVenta.obtenerVentas(ventas, cantidadVentas);

      for (int i = 0; i < cantidadVentas; i++)
      {
        cout << "------------------" << endl;
        ventas[i].mostrar();
      }

      delete[] ventas;
    }
    break;
    case 4:
    {
      int cantidadVentas = archivoVenta.cantidadVentas();

      for (int i = 0; i < cantidadVentas; i++)
      {
        Venta venta = archivoVenta.obtenerVenta(i);

        if (venta.getTotal() > 25000) {
          cout << "------------------" << endl;
          venta.mostrar();
        }
      }

    }

    break;

    case 5: {
      int codigo, posicion;
      cout << "Ingrese Codigo: ";
      cin >> codigo;

      posicion = archivoVenta.buscarPorCodigo(codigo);

      if (posicion == -1) {
        cout << "No se encuentra esa venta... " << endl;
      }
      else {
        Venta venta = archivoVenta.obtenerVenta(posicion);
        venta.mostrar();
      }



    }break;

    case 6: {
      int codigo, posicion;
      cout << "Ingrese Codigo: ";
      cin >> codigo;

      posicion = archivoVenta.buscarPorCodigo(codigo);

      if (posicion != -1) {
        Venta venta = archivoVenta.obtenerVenta(posicion);
        cout << "------------------" << endl;
        venta.mostrar();
        cout << "------------------" << endl;
        venta.modificar();
        if (archivoVenta.guardar(venta, posicion)) {
          cout << "Venta modificada correctamente" << endl;
        }
        else{
          cout << "Error al modificar la venta" << endl;
        }

      }
      else {
        cout << "No se encuentra esa venta... " << endl;
      }
    }break;

    case 0:
      cout << "Gracias por usar el programa" << endl;


      break;
    default:
      cout << "Opcion incorrecta" << endl;

      break;
    }

  } while (opcion != 0);


  return 0;
}
