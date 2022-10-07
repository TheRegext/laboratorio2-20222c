#include "EstudiantesArchivo.h"

Estudiante EstudiantesArchivo::leer(int nroRegistro) {
  Estudiante est;
  FILE* p;
  p = fopen("estudiantes.dat", "rb");
  if (p == NULL) {
    return est;
  }
  fseek(p, nroRegistro * sizeof(Estudiante), SEEK_SET);
  fread(&est, sizeof(Estudiante), 1, p);
  fclose(p);
  return est;
}

bool EstudiantesArchivo::guardar(Estudiante est) {
  FILE* p = fopen("estudiantes.dat", "ab");
  if (p == NULL) {
    return false;
  }
  bool ok = fwrite(&est, sizeof(Estudiante), 1, p);
  fclose(p);
  return ok;
}

bool EstudiantesArchivo::guardar(Estudiante est, int nroRegistro) {
  FILE* p = fopen("estudiantes.dat", "rb+");
  if (p == NULL) {
    return false;
  }
  fseek(p, nroRegistro * sizeof(Estudiante), SEEK_SET);
  bool ok = fwrite(&est, sizeof(Estudiante), 1, p);
  fclose(p);
  return ok;
}

int EstudiantesArchivo::getCantidad() {
  FILE* p = fopen("estudiantes.dat", "rb");
  if (p == NULL) {
    return 0;
  }
  fseek(p, 0, SEEK_END);
  int cant = ftell(p) / sizeof(Estudiante);
  fclose(p);
  return cant;
}

int EstudiantesArchivo::buscar(int legajo) {
  int cant = getCantidad();
  Estudiante est;
  for (int i = 0; i < cant; i++) {
    est = leer(i);
    if (est.getLegajo() == legajo) {
      return i;
    }
  }
  return -1;
}