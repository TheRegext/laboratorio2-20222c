#include "Curso.h"

Curso::Curso(Profesor profe): 
  _profesor(profe),
  _profesores{ Profesor("", "", ""), Profesor("", "", "") }
{
  _cantidadAlumnos = 0;
}

void Curso::setNombre(std::string nombre)
{
  _nombre = nombre;
}

std::string Curso::getNombre()
{
  return _nombre;
}

void Curso::setCodigo(int codigo)
{
  _codigo = codigo;
}

int Curso::getCodigo()
{
  return _codigo;
}

void Curso::setProfesor(Profesor profesor)
{
  _profesor = profesor;
}

Profesor Curso::getProfesor()
{
  return _profesor;
}

void Curso::addAlumno(Alumno alumno)
{
  if (_cantidadAlumnos < 10)
  {
    _alumnos[_cantidadAlumnos] = alumno;
    _cantidadAlumnos++;
  }
}

Alumno Curso::getMejorAlumno()
{
  Alumno mejorAlumno = _alumnos[0];
  for (int i = 1; i < _cantidadAlumnos; i++)
  {
    if (_alumnos[i].getNota() > mejorAlumno.getNota())
    {
      mejorAlumno = _alumnos[i];
    }
  }
  return mejorAlumno;
}
