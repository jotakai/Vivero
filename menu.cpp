#include <iostream>
#include <string>

using namespace std;

#include "Persona.h"
#include "Planta.h"
#include "Fecha.h"
#include "Cliente.h"
#include "Direccion.h"
#include "Empresa.h"
#include "Proveedor.h"
#include"menu.h"

void menu(){

int opcion;

while(true){


cout<<"opcion 1 ----> Sos una Empresa"<<endl;
cout<<"opcion 0 ----> Salir"<<endl;
cin>>opcion;
system("cls");

    switch (opcion){

/*******************************************************************/
    case 1:{
        cout<<"Hola Mundo1"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"fin del programa"<<endl;
        system("pause");
        return;
    }
    break;
/*******************************************************************/
    default:{
        system("cls");
        cout<<"valor ingresado no existe dentro del menu"<<endl;
        system("pause");
    }
        break;
/*******************************************************************/
    }

}


}