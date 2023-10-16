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
    //Crear una funcion donde puedar Cargar y se almacene en un archivo "Planta.dat"
    

private:
    int _codigoPlanta;
    char _nombre[30];
    char  _especie [30];
    float _precio;
};