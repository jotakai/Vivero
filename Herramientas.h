#pragma once
#include <cstring>

class Herramienta
{
private:
    int _id;
    char _nombre[30];
    float _precio;
    bool _estado;
public:

void setId(int); 
void setNombre(const char*); 
void setPrecio(float);
void setEstado(bool);
int getId() const;
const char *getNombre() const; 
float getPrecio() const; 
bool getEstado() const;

    Herramienta();
    ~Herramienta();
};
Herramienta::Herramienta(/* args */)
{
}

Herramienta::~Herramienta()
{
}

