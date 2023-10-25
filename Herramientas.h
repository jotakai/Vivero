#pragma once
#include <cstring>

class Herramienta
{
private:
    int _idHerramienta;
    char _nombre[30];
    float _precio;
    int _stock;
    bool _estado;
    
    //<---- lo cambie a true ---- soy maxivill
public:
    void setIdHerramienta(int); 
    void setNombre(const char*); 
    void setPrecio(float);
    void setEstado(bool);
    void setStock(int);
    int getStock();
    int getIdHerramienta() const;
    const char *getNombre() const; 
    float getPrecio() const; 
    bool getEstado() const;


    void Cargar(int);
    void Mostrar();

//constructores
    Herramienta();
    ~Herramienta();

    Herramienta(int id,const char* nombre,float precio,bool estado);

};


