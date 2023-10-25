#pragma once
#include <string>

class Planta
{
public:
    Planta();
    Planta(std::string nombre, std::string estacion);
    ~Planta();

  
///SETERS
    void setNombre(std::string nombre);
    void setEstacion(std::string estacion);
    void setPrecio(float);       //
         void setCodigoPlanta(int); //       //
         void setStock(int);
         void setEstado(bool);
///GETERS
float getPrecio();   
  std::string getNombre();
    std::string getEstacion();
    float getCodigoPlanta();   
    int  getStock(); //
    bool getEstado();
    void Cargar(int);
    void Mostrar();
    //Crear una funcion donde puedar Cargar y se almacene en un archivo "Planta.dat"
    

private:
    int _idPlanta;
    char _nombre[30];
    char  _estacion[30];
    float _precio;
    int _stock;
bool _estado;
};