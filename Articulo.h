#pragma once
#include <cstring>
class Articulo
{
private:
    int _id;
    char _nombre[30];
    float _precio;
    int _TipoDeArticulo; // cambiar a _TipoDeArticulo
    int _stock;
    bool _estado;

public:
Articulo();
    /// SETERS
    void setNombre(const char *);
    void setTipoDeArticulo(int);
    void setPrecio(float); //
    void setId(int);       //       //
    void setStock(int);
    void setEstado(bool);
    /// GETTERS
     int getID()const;
    char getNombre ()const;
    float getPrecio()const;
    int getTipoDeArticulo()const;
    int getStock()const;
    bool getEstado()const;
    void Mostrar();
    void Cargar(int);
};