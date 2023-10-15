#include "StockPlanta.h"

void StockPlanta::setCapacidad(int cantidad){
    _capacidad=cantidad;
}
int StockPlanta::getCapacidad()
{
    return _capacidad;
}
void StockPlanta::setEstado(bool estado)
{
    _estado=estado;
}
bool StockPlanta::getEstado()
{
    return _estado;
}
void StockPlanta::AumentarCapacidad(int cantidad){
    _capacidad=_capacidad+cantidad;
}
void StockPlanta::DisminuirCapacidad(int cantidad){
    _capacidad=_capacidad-cantidad;
}
