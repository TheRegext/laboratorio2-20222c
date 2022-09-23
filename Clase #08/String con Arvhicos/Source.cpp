#include <iostream>
#include <string>
using namespace std;

class Person {
private:
  char name[50];
public:
  void setNombre(string nombre) {
    strcpy(name, nombre.c_str());
  }
  
  string getNombre() {
    return name;
  }
};





int main() {
  string nombre;
  FILE* pFile = fopen("personas.dat", "rb");

  nombre = "Marcos Labat";
  Person persona;
  persona.setNombre(nombre);

  //fwrite(&persona, sizeof(Person), 1, pFile);

  fread(&persona, sizeof(Person), 1, pFile);
  
  cout << persona.getNombre() << endl;


  fclose(pFile);
  

  cout << sizeof(Person) << endl;
  
  
  return 0;
}