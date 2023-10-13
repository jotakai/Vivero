#pragma once

#include"Persona.h"

class Proveedor : public Persona{

private:
char _id[50];
int _cuit;
public:

const char * getID();
void setID (const char *);
int  getcuit();
void setcuit (int);

void Cargar();
void Mostrar();

//Construcctores
Proveedor();
Proveedor(const char *id,int cuit);

};