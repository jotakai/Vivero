#pragma once
#include <string>

class Planta
{
public:
    Planta();
    Planta(std::string nombre, std::string estacion);
    ~Planta();

    std::string getNombre();
    std::string getEstacion();

    void setNombre(std::string nombre);
    void setEstacion(std::string estacion);
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
    char  _estacion[30];
    float _precio;
};