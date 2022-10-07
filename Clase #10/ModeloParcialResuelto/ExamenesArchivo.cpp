#include "ExamenesArchivo.h"

Examen ExamenesArchivo::leer(int nroRegistro){
  Examen aux;
  FILE* p;
  p = fopen("examenes.dat", "rb");
  if (p == NULL){
    return aux;
  }
  fseek(p, sizeof(Examen) * nroRegistro, SEEK_SET);
  fread(&aux, sizeof(Examen), 1, p);
  fclose(p);
  return aux;
}

bool ExamenesArchivo::guardar(Examen est)
{
  FILE* p;
  p = fopen("examenes.dat", "ab");
  if (p == NULL) {
    return false;
  }
  fwrite(&est, sizeof(Examen), 1, p);
  fclose(p);
  return true;
}

bool ExamenesArchivo::guardar(Examen est, int nroRegistro)
{
  FILE* p;
  p = fopen("examenes.dat", "rb+");
  if (p == NULL) {
    return false;
  }
  fseek(p, sizeof(Examen) * nroRegistro, SEEK_SET);
  fwrite(&est, sizeof(Examen), 1, p);
  fclose(p);
  return true;
}

int ExamenesArchivo::getCantidad()
{
  FILE* p;
  p = fopen("examenes.dat", "rb");
  if (p == NULL) {
    return 0;
  }
  fseek(p, 0, SEEK_END);
  int cant = ftell(p) / sizeof(Examen);
  fclose(p);
  return cant;
}


int ExamenesArchivo::buscar(int id)
{
  Examen aux;
  int i = 0;
  int cantExamenes = getCantidad();
  for (i = 0; i < cantExamenes; i++) {
    aux = leer(i);
    if (aux.getID() == id) {
      return i;
    }
  }
  return -1;
}