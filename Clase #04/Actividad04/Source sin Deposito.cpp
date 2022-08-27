#include <iostream>
#include "Articulo.h"
using namespace std;

int buscarArticulo(Articulo vec[], int cant, int codigo) {
  int index = -1;
  for (int i = 0; i < cant; i++) {
    if (vec[i].getCodigo() == codigo) {
      index = i;
    }
  }

  return index;
}

void inicializar(Articulo vec[]) {
  
  vec[0] = Articulo(20, "Monitor", 5000, 20);
  vec[1] = Articulo(35, "Celular", 1000, 5);
  vec[2] = Articulo(40, "Mouse", 500, 25);
  vec[3] = Articulo(50, "Camara", 1500, 20);
  vec[4] = Articulo(60, "Teclado", 2500, 30);

}

int main() {
  Articulo articulos[5];

  inicializar(articulos);

  int codigo;
  int cantidad;

  float recaudacion = 0;
  
  cout << "Ingrese codigo: ";
  cin >> codigo;
  
  while (codigo != 0) {
    cout << "Ingrese cantidad: ";
    cin >> cantidad;
    
    int index = buscarArticulo(articulos, 5, codigo);

    if (index != -1) {
      if (articulos[index].descontarStock(cantidad)) {
        float monto = articulos[index].getPrecio() * cantidad;
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

  for (int i = 0; i < 5; i++) {
    cout << "Articulo: " << articulos[i].getNombre() << endl;
    cout << "Stock: " << articulos[i].getStock() << endl;
  }

  cout << "Recaudacion total: $" << recaudacion;
  
  
  return 0;
}