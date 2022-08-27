#include <iostream>
#include "Deposito.h"
using namespace std;

int main() {
  Deposito dep;

  int codigo;
  int cantidad;

  float recaudacion = 0;
  
  cout << "Ingrese codigo: ";
  cin >> codigo;
  
  while (codigo != 0) {
    cout << "Ingrese cantidad: ";
    cin >> cantidad;
    
    int index = dep.buscar(codigo);

    if (index != -1) {
      Articulo articulo = dep.getArticulo(index);
      cout << "Articulo: " << articulo.getNombre() << endl;

      if (dep.descontarStock(index, cantidad)) {
        float monto = articulo.getPrecio() * cantidad;
        recaudacion += monto;
        cout << "Monto: $" << monto << endl;
      }
      else {
        cout << "No hay stock disponible para ese articulo" << endl;
      }
      
    }
    else {
      cout << "Articulo no encontrado " << endl;
    }


    cout << "Ingrese codigo: ";
    cin >> codigo;
  }

  dep.mostrar();

  cout << "Recaudacion total: $" << recaudacion;
  
  
  return 0;
}