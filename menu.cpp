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
#include "ArchivoStock.h"
#include"menu.h"

///////////////////////////////////////////////////////////////////////////
void menuPrincipal(){

int opcion;

while(true){


cout<<"opcion 1 ----> Movientos Empresa"<<endl;
cout<<"opcion 2 ----> Movimientos Persona"<<endl;
cout<<"opcion 0 ----> Fin del Programa"<<endl;
cin>>opcion;
system("cls");

    switch (opcion){

/*******************************************************************/
    case 1:{
        menuEmpresa(opcion);
        system("pause");
        system("cls");
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
///////////////////////////////////////////////////////////////////////////
void menuEmpresa(int opcion){
while(true){

    system("cls");
    cout<<"Opcion 1 ----> Comprar"<<endl;
    cout<<"Opcion 2 ----> Vender"<<endl;
    cout<<"Opcion 0 ----> salir"<<endl;//--> Salir a Menu Principal
    cin>>opcion;
    system("cls");
    switch (opcion)
    {
/*******************************************************************/
    case 1:{
        /*hacer una lista de lo que quiere COMPRAR ejemplo
        • Plantas ---> Sub Menu de listar plantas y su Stock
        • Herramientas ---> Sub Menu de listar Herramientas y su Stock
        • Abonos ---> Sub Menu de listar Abonos y su Stock
        • Incectisidas ---> Sub Menu de listar Incectisidas y su Stock
        • etc
*/
    cout<<"OPCION 1"<<endl;
    system("pause");
    }
        break;
/*******************************************************************/
    case 2:{
        /*hacer una lista de lo que quiere VENDER ejemplo
        • Plantas ---> Sub Menu de listar plantas y su Stock
        • Herramientas ---> Sub Menu de listar Herramientas y su Stock
        • Abonos ---> Sub Menu de listar Abonos y su Stock
        • Incectisidas ---> Sub Menu de listar Incectisidas y su Stock
        • etc
*/
    cout<<"OPCION 2"<<endl;
    system("pause");
    }
        break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Salir"<<endl;
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
///////////////////////////////////////////////////////////////////////////
void menuPlantasCompraEmpresa(){ 
    int opcion; 
    while(true){ 

    system("cls");
    cout<<"Opcion 1 ---->DETALLE PLANTAS X NOMB "<<endl;
    cout<<"Opcion 2 ----> LISTAR CANTIDAD STOCK X y PLANTA"<<endl; //POR ID
    cout<<"Opcion 3 ----> Cual Planta quiere y Mostraremos SU Precio y Stock"<<endl;
    cout<<"Opcion 0 ----> salir"<<endl;//--> Salir a Menu Principal
    cin>>opcion;
    system("cls");
switch (opcion)
{
/*******************************************************************/
    case 1:{
        system("cls");
        cout<<"Opcion 1"<<endl;
        system("pause");
        return;
    }
    break;
/*******************************************************************/
    case 2:{
        system("cls");
        cout<<"Opcion 2"<<endl;
        system("pause");
        return;
    }
    break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Salir"<<endl;
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
///////////////////////////////////////////////////////////////////////////