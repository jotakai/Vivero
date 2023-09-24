#pragma once
#include <string>

class Fecha
{
public:
    Fecha();
    Fecha(int dia, int mes, int anio);
    ~Fecha();

    int getDia();
    int getMes();
    int getAnio();

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

private:
    int _dia;
    int _mes;
    int _anio;
};