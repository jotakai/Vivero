#include<iostream>

using namespace std;

#include"Agroquimicos.h"

/***************************************************************/
void Agroquimicos::setTipoAgroquimico(int tipoAgroquimico){
    _tipoAgroquimico=tipoAgroquimico;
}
/***************************************************************/
int Agroquimicos::getTipoAgroquimico(){
    return _tipoAgroquimico;
}
/***************************************************************/
void Agroquimicos::Cargar(){

    int opcion;
    cout<<"Ingrese Tipo de Dato"<<endl;
    cin>>opcion;
    setTipoAgroquimico(opcion);

}
/***************************************************************/
void Agroquimicos::Mostrar(){

cout<<"Su Tipo de Dato es: "<<getTipoAgroquimico()<<endl;

}
/***************************************************************/