#include <iostream>
#include "Alumno.h"

using namespace std;
void parametros(Alumno copia, Alumno& referencia, Alumno* puntero){
  copia.setLegajo(100);

  referencia.setLegajo(200);

  puntero->setLegajo(300);
  
}



void objetoDinamico() {
  Alumno* a;

  a = new Alumno;

  a->cargar();

  parametros(*new Alumno(100, "Brian"), *new Alumno(100, "Brian"), new Alumno(100,"Brian"));

  delete a;
}

int main(){
  Alumno* pAlumnos;
  
  int cantidad;
  
  std::cout << "Ingrese cantidad de alumnos: ";
  std::cin >> cantidad;
  
  pAlumnos = new Alumno[cantidad];

  for (int i = 0; i < cantidad; i++) {
    pAlumnos[i].cargar();
  }
    
  for (int i = 0; i < cantidad; i++) {
    pAlumnos[i].mostrar();
  }

  std::cout << "-------------------------------------" << std::endl;
  std::cout << pAlumnos << std::endl;
  delete [] pAlumnos;
  std::cout << pAlumnos << std::endl;

  return 0;
}