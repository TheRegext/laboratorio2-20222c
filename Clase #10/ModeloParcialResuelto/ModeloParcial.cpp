#include <iostream>
#include "ModeloParcial.h"
#include "EstudiantesArchivo.h"
#include "ExamenesArchivo.h"
using namespace std;

int ModeloParcial::cantidadExamenesAnio(int legajo, int anio) {
  ExamenesArchivo exa;
  int cantidad = 0;
  int cantidadExamenes = exa.getCantidad();
  
  for (int j = 0; j < cantidadExamenes; j++) {
    Examen examen = exa.leer(j);

    if (examen.getLegajo() == legajo
      && examen.getFecha().getAnio() == 2022) {
      cantidad ++;
    }
  }

  return cantidad;
}

void ModeloParcial::Punto1(){
  EstudiantesArchivo ea;
  int cantidadEstudiantes = ea.getCantidad();

  for (int i = 0; i < cantidadEstudiantes; i++) {
    Estudiante estudiante = ea.leer(i);
    if (cantidadExamenesAnio(estudiante.getLegajo(), 2022) == 0) {
      cout << estudiante.getLegajo() << " " << estudiante.getNombres() << " " << estudiante.getApellidos() << endl;
    }
  }
}

void cargarEstudiantes(Estudiante vec[], int cantidad) {
  EstudiantesArchivo ea;
  for (int i = 0; i < cantidad; i++) {
    vec[i] = ea.leer(i);
  }
}

void ModeloParcial::Punto1DIM() {
  EstudiantesArchivo ea;
  ExamenesArchivo exa;
  int cantidadEstudiantes = ea.getCantidad();
  int cantidadExamenes = exa.getCantidad();

  Estudiante* estudiantes = new Estudiante[cantidadEstudiantes];

  cargarEstudiantes(estudiantes, cantidadEstudiantes);
  

  Examen* examenes = new Examen[cantidadExamenes];
  for (int i = 0; i < cantidadExamenes; i++) {
    examenes[i] = exa.leer(i);
  }

  for (int i = 0; i < cantidadEstudiantes; i++) {
    bool noRindio = true;
    
    for (int j = 0; j < cantidadExamenes; j++) {
      if (estudiantes[i].getLegajo() == examenes[j].getLegajo()
        && examenes[j].getFecha().getAnio() == 2022) {
        noRindio = false;
      }
    }

    if (noRindio) {
      cout << estudiantes[i].getLegajo() << " " << estudiantes[i].getNombres() << " " << estudiantes[i].getApellidos() << endl;
    }
  }
 
}



void ModeloParcial::Punto2() {
  EstudiantesArchivo ea;
  ExamenesArchivo exa;
  int cantidadEstudiantes = ea.getCantidad();
  int cantidadExamenes = exa.getCantidad();

  Estudiante* estudiantes = new Estudiante[cantidadEstudiantes];

  cargarEstudiantes(estudiantes, cantidadEstudiantes);


  Examen* examenes = new Examen[cantidadExamenes];
  for (int i = 0; i < cantidadExamenes; i++) {
    examenes[i] = exa.leer(i);
  }

  for (int i = 0; i < cantidadEstudiantes; i++) {
    int cantAprobados, cantDesaprobados;
    cantAprobados = cantDesaprobados = 0;

    for (int j = 0; j < cantidadExamenes; j++) {
      if (estudiantes[i].getLegajo() == examenes[j].getLegajo()) {
        if (examenes[j].getNota() >= 6) {
          cantAprobados++;
        }
        else {
          cantDesaprobados++;
        }
      }
    }

    cout << estudiantes[i].getLegajo() 
      << " " << estudiantes[i].getNombres() 
      << " " << estudiantes[i].getApellidos() 
      << " " << cantAprobados 
      << " " << cantDesaprobados << endl;
  }

}




void ModeloParcial::Punto3() {
  EstudiantesArchivo ea;
  ExamenesArchivo exa;
  int cantidadEstudiantes = ea.getCantidad();
  int cantidadExamenes = exa.getCantidad();
  int cantidadMasDeDos = 0;

  Estudiante* estudiantes = new Estudiante[cantidadEstudiantes];

  cargarEstudiantes(estudiantes, cantidadEstudiantes);


  Examen* examenes = new Examen[cantidadExamenes];
  for (int i = 0; i < cantidadExamenes; i++) {
    examenes[i] = exa.leer(i);
  }

  for (int i = 0; i < cantidadEstudiantes; i++) {
    int materias[60]{};
    bool masdeDos = false;

    for (int j = 0; j < cantidadExamenes; j++) {
      if (estudiantes[i].getLegajo() == examenes[j].getLegajo()
        && examenes[j].getFecha().getAnio() >= 2018 
        && examenes[j].getFecha().getAnio() <= 2022) {
        materias[examenes[j].getIDMateria() - 1]++;
        if (materias[examenes[j].getIDMateria() - 1] >= 2) {
          masdeDos = true; 
        }
      }
    }

    if (masdeDos) {
      cantidadMasDeDos++;
    }
    
   
  }

  cout << cantidadMasDeDos << endl;

}

