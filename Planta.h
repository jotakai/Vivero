#pragma once
#include <string>

class Planta
{
public:
    Planta();
    Planta(std::string nombre, std::string especie, int edad);
    ~Planta();

    std::string getNombre();
    std::string getEspecie();
    int getEdad();

    void setNombre(std::string nombre);
    void setEspecie(std::string especie);
    void setEdad(int edad);

private:
    std::string _nombre;
    std::string _especie;
    int _edad;
};