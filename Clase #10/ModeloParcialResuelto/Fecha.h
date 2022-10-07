#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

#include <string>

class Fecha{
    public:
        int  getDia();
        int  getMes();
        int  getAnio();
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
             Fecha(int dia, int mes, int anio);
             Fecha();
        std::string toString();

    private:
        int _dia, _mes, _anio;

};
#endif // FECHA_H_INCLUDED
