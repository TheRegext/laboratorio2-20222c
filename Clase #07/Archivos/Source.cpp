#include <iostream>
using namespace std;

void guardarRegistro() {
  FILE *pFile = fopen("numeros.dat", "ab");

  if (pFile != nullptr) {
    cout << "El archivo se abrio correctamente" << endl;
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    fwrite(&n, sizeof(int), 1, pFile);

    fclose(pFile);
  }
  else {
    cout << "Error al abrir el archivo" << endl;
  }
}

void mostrarRegistros() {
  FILE *pFile = fopen("numeros.dat", "rb");

  if (pFile == nullptr) {
    cout << "Error al abrir el archivo" << endl;
    return ;
  }

  int n;
  while (fread(&n, sizeof(int), 1, pFile) == 1) {
    cout << "Numero: " << n << endl;
  }
  
    fclose(pFile);
}


// uso de archvos
int main() {
  
   mostrarRegistros();
  //guardarRegistro();
  

  return 0;
}