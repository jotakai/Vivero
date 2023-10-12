#pragma once
#include <cstring>

class Direccion{
private:
//char _id[]
int _codigoPostal;
char _calle [50];
char _ciudad [50];
char _provincia[50];
char _numeroCalle[50];

public:

int getCodigoPostal();
const char *getCalle ();
const char *getCiudad ();
const char *getProvincia ();
void setCodigoPostal (int);
void setCalle (const char *);
void setCiudad (const char *);
void setProvincia(const char *);
};
