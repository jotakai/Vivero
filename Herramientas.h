#pragma once
#include <cstring>

class Herramienta
{
private:
    int _codigoHerramienta;
    char _nombre[30];
    float _precio;
    
    //<---- lo cambie a true ---- soy maxivill
public:

    void setCodigoHerramienta(int); 
    void setNombre(const char*); 
    void setPrecio(float);
    void setEstado(bool);
    int getCodigoHeramienta() const;
    const char *getNombre() const; 
    float getPrecio() const; 
    bool getEstado() const;


    void Cargar();
    void Mostrar();

//constructores
    Herramienta();
    ~Herramienta();

    Herramienta(int id,const char* nombre,float precio,bool estado);

};


