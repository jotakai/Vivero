#pragma once
#include "Planta.h"

class StockPlanta{
private :
Planta _planta;
int _capacidad;//lo maximo que puede almacenar
bool _estado=1;
public:

void setCapacidad(int);
int getCapacidad();
void setEstado(bool);
bool getEstado();

void AumentarCapacidad(int );
void DisminuirCapacidad(int );
};