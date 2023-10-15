#pragma once
#include <string>

class Planta
{
public:
    Planta();
    Planta(std::string nombre, std::string especie);
    ~Planta();

    std::string getNombre();
    std::string getEspecie();

    void setNombre(std::string nombre);
    void setEspecie(std::string especie);
    void setPrecio(float);       //
    float getPrecio();           //
    void setCodigoPlanta(float); //
    float getCodigoPlanta();     //
    void Cargar();
    void Mostrar();

private:
    int _codigoPlanta;
    std::string _nombre;
    std::string _especie;
    float _precio;
};