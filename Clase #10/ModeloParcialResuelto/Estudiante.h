#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include <string>
#include "Fecha.h"

class Estudiante{
    public:
        std::string getApellidos();
        std::string getNombres();
        std::string toString();
        int getLegajo();
        Fecha getFechaNacimiento();
        int getEdad();
        void setApellidos(std::string apellidos);
        void setNombres(std::string nombres);
        void setLegajo(int legajo);
        void setFechaNacimiento(Fecha fnac);

    private:
        char _apellidos[50];
        char _nombres[50];
        int _legajo;
        Fecha _fnac;
};

#endif // ESTUDIANTE_H_INCLUDED
