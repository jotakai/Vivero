#pragma once
#include <string>

class Persona{
    
public:

//contructor predeterminado
    Persona();
    Persona(std::string nombre, std::string apellido, int edad);
    ~Persona();

    std::string getNombre();
    std::string getApellido();
    int getEdad();

    void setNombre(std::string nombre);
    void setApellido(std::string apellido);
    void setEdad(int edad);

    void Cargar();
    void Mostrar();


private:
    std::string _nombre;
    std::string _apellido;
    int _edad;
};