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
        system("cls");
    }
    break;
/*******************************************************************/
    case 2:{
        menuPersona(opcion);
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


//PERSONA
///////////////////////////////////////////////////////////////////////////
void menuPersona(int opcion){
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
    menuPersonaQueDeseaComprar(opcion);
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
    menuPersonaQueDeseaVender(opcion);
    }
        break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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



//EMPRESA
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
    menuEmpresaQueDeseaComprar(opcion);
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
    menuEmpresaQueDeseaVender(opcion);
    }
        break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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
void menuEmpresaQueDeseaComprar(int opcion){
while(true){

    system("cls");
    cout<<"Opcion 1 ----> Plantas"<<endl;
    cout<<"Opcion 2 ----> Herramientas"<<endl;
    cout<<"Opcion 0 ----> salir"<<endl;
    cin>>opcion;
    system("cls");
    switch (opcion)
    {
/*******************************************************************/
    case 1:{

    menuPlantasCompraEmpresa(opcion);
    }
        break;
/*******************************************************************/
    case 2:{

    menuComprarHerramientasEmpresa(opcion);
    }
        break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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
void menuEmpresaQueDeseaVender(int opcion){
while(true){

    system("cls");
    cout<<"Opcion 1 ----> Plantas"<<endl;
    cout<<"Opcion 2 ----> Herramientas"<<endl;
    cout<<"Opcion 0 ----> salir"<<endl;
    cin>>opcion;
    system("cls");
    switch (opcion)
    {
/*******************************************************************/
    case 1:{

    menuPlantasVentaEmpresa(opcion);
    }
        break;
/*******************************************************************/
    case 2:{

    menuVenderHerramientasEmpresa(opcion);
    }
        break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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
void menuPlantasCompraEmpresa(int opcion){ 
    while(true){ 

    system("cls");
    cout<<"Opcion 1 ----> DETALLE TODAS LAS PLANTAS,PRECIO,STOCK "<<endl; //POR ID
    cout<<"Opcion 2 ----> Cual Planta quiere y Mostraremos SU Precio y Stock"<<endl; //hacer otro MENU ❌
    cout<<"Opcion 3 ----> SELECCIONE PLANTA QUE QUIERE COMPRAR "<<endl;//hacer otro MENU ❌
    cout<<"Opcion 0 ----> salir"<<endl;//--> Salir a Menu Principal
    /*al salir si realizaste una compra que cambia el IMPORTE se guarda, si no no se guarda*/
    cin>>opcion;
    system("cls");
switch (opcion)
{
/*******************************************************************/
    case 1:{
        system("cls");
        cout<<"Opcion 1"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 2:{
        system("cls");
        cout<<"Opcion 2"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 3:{
        system("cls");
        cout<<"Opcion 3"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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
void menuPlantasVentaEmpresa(int opcion){ 
    while(true){ 

    system("cls");
    cout<<"Opcion 1 ----> LISTAR TODAS LAS PLANTAS,PRECIO,STOCK"<<endl;  //POR ID
    cout<<"Opcion 2 ----> BUSCAR PLANTA QUE QUIERE COMPRAR "<<endl;
    cout<<"Opcion 3 ----> BUSCAR PRECIO X ARTICULO"<<endl; //BUSCAR Articulo Planta,Herramientas,etc
    cout<<"Opcion 4 ----> VENDER POR LOS ARTICULO SELECCIONADOS"<<endl; //VENDE Articulo Planta,Herramientas,etc
    cout<<"Opcion 0 ----> SALIR"<<endl;//--> Salir a Menu Principal
    cin>>opcion;
    system("cls");
switch (opcion)
{
/*******************************************************************/
    case 1:{
        system("cls");
        cout<<"Opcion 1"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 2:{
        system("cls");
        cout<<"Opcion 2"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 3:{
        system("cls");
        cout<<"Opcion 3"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 4:{
        system("cls");
        cout<<"Opcion 4"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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
void menuComprarHerramientasEmpresa(int opcion){
    while(true){ 

    system("cls");
    cout<<"Opcion 1 ----> DETALLE TODAS LAS HERRAMIENTAS,PRECIO,STOCK "<<endl; //hacer otro MENU ❌
    cout<<"Opcion 2 ----> Cual HERRAMIENTAS quiere y Mostraremos SU Precio y Stock"<<endl;
    cout<<"Opcion 3 ----> BUSCAR HERRAMIENTAS QUE QUIERE COMPRAR"<<endl;
    cout<<"Opcion 4 ----> COMPRAR LOS ARTICULO SELECCIONADOS"<<endl;
    cout<<"Opcion 0 ----> salir"<<endl;//--> Salir a Menu Principal
    /*al salir si realizaste una compra que cambia el IMPORTE se guarda, si no no se guarda*/
    cin>>opcion;
    system("cls");
switch (opcion)
{
/*******************************************************************/
    case 1:{
        system("cls");
        cout<<"Opcion 1"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 2:{
        system("cls");
        cout<<"Opcion 2"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 3:{
        system("cls");
        cout<<"Opcion 3"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 4:{
        system("cls");
        cout<<"Opcion 4"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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
void menuVenderHerramientasEmpresa(int opcion){
while(true){ 

    system("cls");
    cout<<"Opcion 1 ----> LISTAR TODAS LAS HERRAMIENTAS,PRECIO,STOCK"<<endl;  //POR ID
    cout<<"Opcion 2 ----> BUSCAR HERRAMIENTAS QUE QUIERE COMPRAR "<<endl;
    cout<<"Opcion 3 ----> BUSCAR PRECIO X ARTICULO"<<endl; //BUSCAR Articulo Planta,Herramientas,etc
    cout<<"Opcion 4 ----> VENDER POR LOS ARTICULO SELECCIONADOS"<<endl; //VENDE Articulo Planta,Herramientas,etc
    cout<<"Opcion 0 ----> SALIR"<<endl;//--> Salir a Menu Principal
    cin>>opcion;
    system("cls");
switch (opcion)
{
/*******************************************************************/
    case 1:{
        system("cls");
        cout<<"Opcion 1"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 2:{
        system("cls");
        cout<<"Opcion 2"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 3:{
        system("cls");
        cout<<"Opcion 3"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 4:{
        system("cls");
        cout<<"Opcion 4"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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

//Persona
///////////////////////////////////////////////////////////////////////////
void menuPersonaQueDeseaComprar(int opcion){
while(true){

    system("cls");
    cout<<"Opcion 1 ----> Plantas"<<endl;
    cout<<"Opcion 2 ----> Herramientas"<<endl;
    cout<<"Opcion 0 ----> salir"<<endl;
    cin>>opcion;
    system("cls");
    switch (opcion)
    {
/*******************************************************************/
    case 1:{

    menuPlantasCompraPersona(opcion);
    }
        break;
/*******************************************************************/
    case 2:{

    menuHerramientasCompraPersona(opcion);
    }
        break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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
/////////////////////////////////////////////////////////////////////////// 🧡
void menuPersonaQueDeseaVender(int opcion){
while(true){

    system("cls");
    cout<<"Opcion 1 ----> Plantas"<<endl;
    cout<<"Opcion 2 ----> Herramientas"<<endl;
    cout<<"Opcion 0 ----> salir"<<endl;
    cin>>opcion;
    system("cls");
    switch (opcion)
    {
/*******************************************************************/
    case 1:{

    menuPlantasVentaPersona(opcion);
    }
        break;
/*******************************************************************/
    case 2:{

    menuHerramientasVentaPersona(opcion);
    }
        break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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
void menuPlantasCompraPersona(int opcion){
    while(true){ 

    system("cls");
    cout<<"Opcion 1 ----> DETALLE TODAS LAS PLANTAS,PRECIO,STOCK "<<endl; //POR ID
    cout<<"Opcion 2 ----> Cual Planta quiere y Mostraremos SU Precio y Stock"<<endl; //hacer otro MENU ❌
    cout<<"Opcion 3 ----> SELECCIONE PLANTA QUE QUIERE COMPRAR "<<endl;//hacer otro MENU ❌
    cout<<"Opcion 0 ----> salir"<<endl;//--> Salir a Menu Principal
    /*al salir si realizaste una compra que cambia el IMPORTE se guarda, si no no se guarda*/
    cin>>opcion;
    system("cls");
switch (opcion)
{
/*******************************************************************/
    case 1:{
        system("cls");
        cout<<"Opcion 1"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 2:{
        system("cls");
        cout<<"Opcion 2"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 3:{
        system("cls");
        cout<<"Opcion 3"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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
void menuPlantasVentaPersona(int opcion){
    while(true){ 

    system("cls");
    cout<<"Opcion 1 ----> LISTAR TODAS LAS PLANTAS,PRECIO,STOCK"<<endl;  //POR ID
    cout<<"Opcion 2 ----> BUSCAR PLANTA QUE QUIERE COMPRAR "<<endl;
    cout<<"Opcion 3 ----> BUSCAR PRECIO X ARTICULO"<<endl; //BUSCAR Articulo Planta,Herramientas,etc
    cout<<"Opcion 4 ----> VENDER POR LOS ARTICULO SELECCIONADOS"<<endl; //VENDE Articulo Planta,Herramientas,etc
    cout<<"Opcion 0 ----> SALIR"<<endl;//--> Salir a Menu Principal
    cin>>opcion;
    system("cls");
switch (opcion)
{
/*******************************************************************/
    case 1:{
        system("cls");
        cout<<"Opcion 1"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 2:{
        system("cls");
        cout<<"Opcion 2"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 3:{
        system("cls");
        cout<<"Opcion 3"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 4:{
        system("cls");
        cout<<"Opcion 4"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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
void menuHerramientasCompraPersona(int opcion){
    while(true){ 

    system("cls");
    cout<<"Opcion 1 ----> DETALLE TODAS LAS HERRAMIENTAS,PRECIO,STOCK "<<endl; //hacer otro MENU ❌
    cout<<"Opcion 2 ----> Cual HERRAMIENTAS quiere y Mostraremos SU Precio y Stock"<<endl;
    cout<<"Opcion 3 ----> BUSCAR HERRAMIENTAS QUE QUIERE COMPRAR"<<endl;
    cout<<"Opcion 4 ----> COMPRAR LOS ARTICULO SELECCIONADOS"<<endl;
    cout<<"Opcion 0 ----> salir"<<endl;//--> Salir a Menu Principal
    /*al salir si realizaste una compra que cambia el IMPORTE se guarda, si no no se guarda*/
    cin>>opcion;
    system("cls");
switch (opcion)
{
/*******************************************************************/
    case 1:{
        system("cls");
        cout<<"Opcion 1"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 2:{
        system("cls");
        cout<<"Opcion 2"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 3:{
        system("cls");
        cout<<"Opcion 3"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 4:{
        system("cls");
        cout<<"Opcion 4"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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
void menuHerramientasVentaPersona(int opcion){
while(true){ 

    system("cls");
    cout<<"Opcion 1 ----> LISTAR TODAS LAS HERRAMIENTAS,PRECIO,STOCK"<<endl;  //POR ID
    cout<<"Opcion 2 ----> BUSCAR HERRAMIENTAS QUE QUIERE COMPRAR "<<endl;
    cout<<"Opcion 3 ----> BUSCAR PRECIO X ARTICULO"<<endl; //BUSCAR Articulo Planta,Herramientas,etc
    cout<<"Opcion 4 ----> VENDER POR LOS ARTICULO SELECCIONADOS"<<endl; //VENDE Articulo Planta,Herramientas,etc
    cout<<"Opcion 0 ----> SALIR"<<endl;//--> Salir a Menu Principal
    cin>>opcion;
    system("cls");
switch (opcion)
{
/*******************************************************************/
    case 1:{
        system("cls");
        cout<<"Opcion 1"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 2:{
        system("cls");
        cout<<"Opcion 2"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 3:{
        system("cls");
        cout<<"Opcion 3"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 4:{
        system("cls");
        cout<<"Opcion 4"<<endl;
        system("pause");
    }
    break;
/*******************************************************************/
    case 0:{
        system("cls");
        cout<<"Saliste"<<endl;
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

///////////////////////////////////////////////////////////////////////////