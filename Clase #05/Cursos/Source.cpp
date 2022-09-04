#include <iostream>
#include "Alumno.h"
#include "Profesor.h"
#include "Curso.h"

using namespace std;

int main()
{
  // crear un menu
  // 1. Cargar Profesor
  // 2. Cargar Alumno
  // 3. Estadistica
  // 0. Salir
  Curso curso(Profesor("", "", ""));

  int opcion;
  do
  {
    cout << "1. Cargar Profesor" << endl;
    cout << "2. Cargar Alumno" << endl;
    cout << "3. Estadistica" << endl;
    cout << "0. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
      // cargar profesor
      {
      Profesor profe("", "", "");
      profe.cargar();
      curso.setProfesor(profe);
      
      }
      break;
    case 2:
      // cargar alumno
    {
      Alumno alumno;
      alumno.cargar();
      curso.addAlumno(alumno);
    }
      break;
    case 3:
      // estadistica
      cout << "El profesor es: " << curso.getProfesor().getNombre() << endl;
      cout << "El alumno con mayor nota es: " << curso.getMejorAlumno().getNombre() << endl;
      break;
    case 0:
      // salir
      break;
    default:
      cout << "Opcion incorrecta" << endl;
      break;
    }
  } while (opcion != 0);


  
  return 0;
}