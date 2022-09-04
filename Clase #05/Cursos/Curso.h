#pragma once
#include "Profesor.h"
#include "Alumno.h"
#include <string>


class Curso
{
private:
  std::string _nombre;
  int _codigo;
  Profesor _profesor;
  Alumno _alumnos[10];
  int _cantidadAlumnos;
  Profesor _profesores[2];
public:
  Curso(Profesor profe);
  void setNombre(std::string nombre);
  std::string getNombre();
  
  void setCodigo(int codigo);
  int getCodigo();
  
  void setProfesor(Profesor profesor);
  Profesor getProfesor();

  void addAlumno(Alumno alumno);
  Alumno getMejorAlumno();
};

