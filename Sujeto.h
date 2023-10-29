#pragma once
#include <string>

class Sujeto{
    
public:

//contructor predeterminado
   Sujeto();
    Sujeto(std::string nombre, std::string apellido, int edad);
    ~Sujeto();

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