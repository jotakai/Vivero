#include <iostream>
#include <string>

using namespace std;

#include "Sujeto.h"
#include "Planta.h"
#include "Fecha.h"
#include "Cliente.h"
#include "Direccion.h"
#include "Empresa.h"
#include "Proveedor.h"
#include "FuncionesGlobales.h"
#include "menu.h"
// #include"StockHerramientas.h"
// #include"StockPlanta.h"
#include "ArchivoStockHerramienta.h"
#include "ArchivoStockPlanta.h"
#include "Herramientas.h"

///////////////////////////////////////////////////////////////////////////
void menuPrincipal()
{

    int opcion;

    while (true)
    {

        system("cls");
        cout << "opcion 1 ----> Movimientos Empresa" << endl;
        cout << "opcion 2 ----> Movimientos Persona" << endl;
        cout << "opcion 3 ----> Movimientos Duenio" << endl;
        cout << "opcion 0 ----> Fin del Programa" << endl;
        cin >> opcion;
        system("cls");

        switch (opcion)
        {

            /*******************************************************************/
        case 1:
        {
            menuEmpresa(opcion);
            system("cls");
        }
        break;
            /*******************************************************************/
        case 2:
        {
            menuPersona(opcion);
            system("cls");
        }
        break;
            /*******************************************************************/
        case 3:
        {
            menuDuenio(opcion);
            system("cls");
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "fin del programa" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////

// EMPRESA
///////////////////////////////////////////////////////////////////////////
void menuEmpresa(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> Comprar" << endl;
        cout << "Opcion 2 ----> Vender" << endl;
        cout << "Opcion 0 ----> salir" << endl; //--> Salir a Menu Principal
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {
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
        case 2:
        {
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
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuEmpresaQueDeseaComprar(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> Plantas" << endl;
        cout << "Opcion 2 ----> Herramientas" << endl;
        cout << "Opcion 0 ----> salir" << endl;
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {

            menuPlantasCompraEmpresa(opcion); //,c
        }
        break;
            /*******************************************************************/
        case 2:
        {

            menuComprarHerramientasEmpresa(opcion);
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuEmpresaQueDeseaVender(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> Plantas" << endl;
        cout << "Opcion 2 ----> Herramientas" << endl;
        cout << "Opcion 3 ----> Agroquimicos" << endl;
        cout << "Opcion 0 ----> salir" << endl;
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {

            menuPlantasVentaEmpresa(opcion);
        }
        break;
            /*******************************************************************/
        case 2:
        {

            menuVenderHerramientasEmpresa(opcion);
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuPlantasCompraEmpresa(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> DETALLE TODAS LAS PLANTAS,PRECIO,STOCK " << endl;            // POR ID
        cout << "Opcion 2 ----> Cual Planta quiere y Mostraremos SU Precio y Stock" << endl; // hacer otro MENU ❌
        cout << "Opcion 3 ----> SELECCIONE PLANTA QUE QUIERE COMPRAR " << endl;              // hacer otro MENU ❌
        cout << "Opcion 0 ----> salir" << endl;                                              //--> Salir a Menu Principal
        /*al salir si realizaste una compra que cambia el IMPORTE se guarda, si no no se guarda*/
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {
            system("cls");
            cout << "Opcion 1" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 2:
        {
            system("cls");
            cout << "Opcion 2" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 3:
        {
            system("cls");
            cout << "Opcion 3" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuPlantasVentaEmpresa(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> LISTAR TODAS LAS PLANTAS,PRECIO,STOCK" << endl; // POR ID
        cout << "Opcion 2 ----> BUSCAR PLANTA QUE QUIERE COMPRAR " << endl;
        cout << "Opcion 3 ----> BUSCAR PRECIO X ARTICULO" << endl;              // BUSCAR Articulo Planta,Herramientas,etc
        cout << "Opcion 4 ----> VENDER POR LOS ARTICULO SELECCIONADOS" << endl; // VENDE Articulo Planta,Herramientas,etc
        cout << "Opcion 0 ----> SALIR" << endl;                                 //--> Salir a Menu Principal
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {
            system("cls");
            cout << "Opcion 1" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 2:
        {
            system("cls");
            cout << "Opcion 2" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 3:
        {
            system("cls");
            cout << "Opcion 3" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 4:
        {
            system("cls");
            cout << "Opcion 4" << endl;
                       
            system("pause");
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuComprarHerramientasEmpresa(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> DETALLE TODAS LAS HERRAMIENTAS,PRECIO,STOCK " << endl; // hacer otro MENU ❌
        cout << "Opcion 2 ----> Cual HERRAMIENTAS quiere y Mostraremos SU Precio y Stock" << endl;
        cout << "Opcion 3 ----> BUSCAR HERRAMIENTAS QUE QUIERE COMPRAR" << endl;
        cout << "Opcion 4 ----> COMPRAR LOS ARTICULO SELECCIONADOS" << endl;
        cout << "Opcion 0 ----> salir" << endl; //--> Salir a Menu Principal
        /*al salir si realizaste una compra que cambia el IMPORTE se guarda, si no no se guarda*/
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {
            system("cls");
            cout << "Opcion 1" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 2:
        {
            system("cls");
            cout << "Opcion 2" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 3:
        {
            system("cls");
            cout << "Opcion 3" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 4:
        {
            system("cls");
            cout << "Opcion 4" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuVenderHerramientasEmpresa(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> LISTAR TODAS LAS HERRAMIENTAS,PRECIO,STOCK" << endl; // POR ID
        cout << "Opcion 2 ----> BUSCAR HERRAMIENTAS QUE QUIERE COMPRAR " << endl;
        cout << "Opcion 3 ----> BUSCAR PRECIO X ARTICULO" << endl;              // BUSCAR Articulo Planta,Herramientas,etc
        cout << "Opcion 4 ----> VENDER POR LOS ARTICULO SELECCIONADOS" << endl; // VENDE Articulo Planta,Herramientas,etc
        cout << "Opcion 0 ----> SALIR" << endl;                                 //--> Salir a Menu Principal
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {
            system("cls");
            cout << "Opcion 1" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 2:
        {
            system("cls");
            cout << "Opcion 2" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 3:
        {
            system("cls");
            cout << "Opcion 3" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 4:
        {
            system("cls");
            cout << "Opcion 4" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////

// PERSONA
///////////////////////////////////////////////////////////////////////////
void menuPersona(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> Comprar" << endl;
        cout << "Opcion 2 ----> Vender" << endl;
        cout << "Opcion 0 ----> salir" << endl; //--> Salir a Menu Principal
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {
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
        case 2:
        {
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
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuPersonaQueDeseaComprar(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> Plantas" << endl;
        cout << "Opcion 2 ----> Herramientas" << endl;
        cout << "Opcion 0 ----> salir" << endl;
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {

            menuPlantasCompraPersona(opcion);
        }
        break;
            /*******************************************************************/
        case 2:
        {

            menuHerramientasCompraPersona(opcion);
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuPersonaQueDeseaVender(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> Plantas" << endl;
        cout << "Opcion 2 ----> Herramientas" << endl;
        cout << "Opcion 0 ----> salir" << endl;
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {

            menuPlantasVentaPersona(opcion);
        }
        break;
            /*******************************************************************/
        case 2:
        {

            menuHerramientasVentaPersona(opcion);
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuPlantasCompraPersona(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> DETALLE TODAS LAS PLANTAS,PRECIO,STOCK " << endl;            // POR ID
        cout << "Opcion 2 ----> Cual Planta quiere y Mostraremos SU Precio y Stock" << endl; // hacer otro MENU ❌
        cout << "Opcion 3 ----> SELECCIONE PLANTA QUE QUIERE COMPRAR " << endl;              // hacer otro MENU ❌
        cout << "Opcion 0 ----> salir" << endl;                                              //--> Salir a Menu Principal
        /*al salir si realizaste una compra que cambia el IMPORTE se guarda, si no no se guarda*/
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {
            system("cls");
            cout << "Opcion 1" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 2:
        {
            system("cls");
            cout << "Opcion 2" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 3:
        {
            system("cls");
            cout << "Opcion 3" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuPlantasVentaPersona(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> LISTAR TODAS LAS PLANTAS,PRECIO,STOCK" << endl; // POR ID
        cout << "Opcion 2 ----> BUSCAR PLANTA QUE QUIERE COMPRAR " << endl;
        cout << "Opcion 3 ----> BUSCAR PRECIO X ARTICULO" << endl;              // BUSCAR Articulo Planta,Herramientas,etc
        cout << "Opcion 4 ----> VENDER POR LOS ARTICULO SELECCIONADOS" << endl; // VENDE Articulo Planta,Herramientas,etc
        cout << "Opcion 0 ----> SALIR" << endl;                                 //--> Salir a Menu Principal
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {
            system("cls");
            cout << "Opcion 1" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 2:
        {
            system("cls");
            cout << "Opcion 2" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 3:
        {
            system("cls");
            cout << "Opcion 3" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 4:
        {
            system("cls");
            cout << "Opcion 4" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuHerramientasCompraPersona(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> DETALLE TODAS LAS HERRAMIENTAS,PRECIO,STOCK " << endl; // hacer otro MENU ❌
        cout << "Opcion 2 ----> Cual HERRAMIENTAS quiere y Mostraremos SU Precio y Stock" << endl;
        cout << "Opcion 3 ----> BUSCAR HERRAMIENTAS QUE QUIERE COMPRAR" << endl;
        cout << "Opcion 4 ----> COMPRAR LOS ARTICULO SELECCIONADOS" << endl;
        cout << "Opcion 0 ----> salir" << endl; //--> Salir a Menu Principal
        /*al salir si realizaste una compra que cambia el IMPORTE se guarda, si no no se guarda*/
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {
            system("cls");
            cout << "Opcion 1" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 2:
        {
            system("cls");
            cout << "Opcion 2" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 3:
        {
            system("cls");
            cout << "Opcion 3" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 4:
        {
            system("cls");
            cout << "Opcion 4" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void menuHerramientasVentaPersona(int opcion)
{
    while (true)
    {

        system("cls");
        cout << "Opcion 1 ----> LISTAR TODAS LAS HERRAMIENTAS,PRECIO,STOCK" << endl; // POR ID
        cout << "Opcion 2 ----> BUSCAR HERRAMIENTAS QUE QUIERE COMPRAR " << endl;
        cout << "Opcion 3 ----> BUSCAR PRECIO X ARTICULO" << endl;              // BUSCAR Articulo Planta,Herramientas,etc
        cout << "Opcion 4 ----> VENDER POR LOS ARTICULO SELECCIONADOS" << endl; // VENDE Articulo Planta,Herramientas,etc
        cout << "Opcion 0 ----> SALIR" << endl;                                 //--> Salir a Menu Principal
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            /*******************************************************************/
        case 1:
        {
            system("cls");
            cout << "Opcion 1" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 2:
        {
            system("cls");
            cout << "Opcion 2" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 3:
        {
            system("cls");
            cout << "Opcion 3" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 4:
        {
            system("cls");
            cout << "Opcion 4" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
            /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////

// DUEÑO
///////////////////////////////////////////////////////////////////////////
void menuDuenio(int opcion)
{

    char usuario[30];
    int contra;
    int band = 0;
    int i = 1;

    for (int i = 1; i <= 4; i++)
    {

        if (i <= 3)
        {
            cout << "ingrese usuario: " << endl; // el usuario es Vivero
            cargarCadena(usuario, 30);
            cout << "Ingrese Contracenia: " << endl; // la contraceña es 123
            cin >> contra;

            if ((contra == 123) && (strcmp(usuario, "Vivero") == 0))
            {
                band = 1;
                cout << "CORRECTO" << endl;
                system("pause");
                i = 5;
            }
            else
            {
                cout << "el usuario o contracenia son incorrectos" << endl;
            }
        }

        if ((i == 4) && (band == 0))
        {
            system("cls");
            cout << "no ingresaste correctamente el usuario y contracenia" << endl;
            system("pause");
            return;
        }
    }

    if (band == 1)
    {

        while (true)
        {
            system("cls");
            cout << "BIENVENIDO DUENIO" << endl;
            cout << "Opcion 1 ----> Cargar Datos" << endl;                       //'ab' de archivos
            cout << "Opcion 2 ----> Modificar Datos" << endl;                    //'rb' que lo lea y modifique
            cout << "Opcion 3 ----> Borrar o Limpiar Datos" << endl;             //'wb' de archivos == 'baja Fisica'
            cout << "Opcion 4 ----> dar de baja algun Productos" << endl;        // bool para dar de 'basa logica'
            cout << "Opcion 5 ----> Listar Datos" << endl;                       // seleccionar el archivo que quieres que abra y muestre
            cout << "Opcion 6 ----> Contar Registros de algun Producto" << endl; // Cuenta todos los registros dentro del bloc de notas
            cout << "Opcion 0 ----> salir" << endl;                              //--> Salir a Menu Principal
            cin >> opcion;
            system("cls");

            switch (opcion)
            {
                /*******************************************************************/
            case 1:
            {
                system("cls");
                CargarDatos(opcion);
                system("pause");
            }
            break;
                /*******************************************************************/
            case 2:
            {
                system("cls");
                ModificarDatos(opcion);
                system("pause");
            }
            break;
                /*******************************************************************/
            case 3:
            {
                system("cls");
                LimpiarDatos(opcion);
                system("pause");
            }
            break;
                /*******************************************************************/
            case 4:
            {
                system("cls");

                system("pause");
            }
            break;
                /*******************************************************************/
            case 5:
            {
                system("cls");
                ListarDatos(opcion);
            }
            break;
                /*******************************************************************/
            case 6:
            {

                system("cls");
                ContarRegistros(opcion);
                system("pause");
            }
            break;
                /*******************************************************************/
            case 0:
            {
                system("cls");
                cout << "Saliste" << endl;
                system("pause");
                return;
            }
            break;
                /*******************************************************************/
            default:
            {
                system("cls");
                cout << "valor ingresado no existe dentro del menu" << endl;
                system("pause");
            }
            break;
                /*******************************************************************/
            }
        }
    }
}

///////////////////////////////////////////////////////////////////////////
void CargarDatos(int opcion)
{
    system("cls");

    while (true)
    {
        system("cls");
        cout << "Que quieres Cargar?" << endl
             << endl;
        cout << "Opcion 1 ---> Plantas" << endl;       // Crear funcion que carge plantas a un Archivos
        cout << "Opcion 2 ---> Herramientas" << endl;  // Crear funcion que carge Herramientas a un Archivos
        cout << "Opcion 3 ---> Agro Quimicos" << endl; // Crear funcion que carge Agro Quimicos a un Archivos
        cout << "Opcion 0 ----> salir" << endl;
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
        /*******************************************************************/
        case 1:
        {
            system("cls");
            CargarPlanta();
            system("pause");
            // ARMAR UNA FUNCION QUE PERMITA CARGAR EN ARCHIVO Planta
            //  Planta ob1;
            //  ob1.Cargar();
        }
        break;
        /*******************************************************************/
        case 2:
        {
            system("cls");
            cout << "OPCION 2" << endl;
            CargarHerramienta();
            system("pause");
        }
        break;
        /*******************************************************************/
        case 3:
        {
            system("cls");
            cout << "OPCION 3" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
        /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void ModificarDatos(int opcion)
{
    system("cls");
    cout << "Que quieres Modificar?" << endl
         << endl;
    cout << "Opcion 1 ---> Plantas" << endl;       // Crear funcion que carge plantas a un Archivos
    cout << "Opcion 2 ---> Herramientas" << endl;  // Crear funcion que carge Herramientas a un Archivos
    cout << "Opcion 3 ---> Agro Quimicos" << endl; // Crear funcion que carge Agro Quimicos a un Archivos
    cout << "Opcion 0 ----> salir" << endl;
    cin >> opcion;
    system("cls");
    switch (opcion)
    {
    /*******************************************************************/
    case 1:
    {
        system("cls");
        cout << "OPCION 1" << endl;
        system("pause");
    }
    break;
    /*******************************************************************/
    case 2:
    {
        system("cls");
        cout << "OPCION 2" << endl;
        ModificarHerramienta();
        system("pause");
    }
    break;
    /*******************************************************************/
    case 3:
    {
        system("cls");
        cout << "OPCION 3" << endl;
        system("pause");
    }
    break;
        /*******************************************************************/
    case 0:
    {
        system("cls");
        cout << "Saliste" << endl;
        system("pause");
        return;
    }
    break;
    /*******************************************************************/
    default:
    {
        system("cls");
        cout << "valor ingresado no existe dentro del menu" << endl;
        system("pause");
    }
    break;
        /*******************************************************************/
    }
}

///////////////////////////////////////////////////////////////////////////
void LimpiarDatos(int opcion)
{
    system("cls");
    cout << "Que quieres Limpiar?" << endl
         << endl;
    cout << "Opcion 1 ---> Plantas" << endl;       // Crear funcion que carge plantas a un Archivos
    cout << "Opcion 2 ---> Herramientas" << endl;  // Crear funcion que carge Herramientas a un Archivos
    cout << "Opcion 3 ---> Agro Quimicos" << endl; // Crear funcion que carge Agro Quimicos a un Archivos
    cout << "Opcion 0 ----> salir" << endl;
    cin >> opcion;
    system("cls");
    switch (opcion)
    {
    /*******************************************************************/
    case 1:
    {
        system("cls");
        LimpiarPlanta();
        system("pause");
        // ARMAR UNA FUNCION QUE PERMITA CARGAR EN ARCHIVO Planta
        //  Planta ob1;
        //  ob1.Cargar();
    }
    break;
    /*******************************************************************/
    case 2:
    {
        system("cls");
        cout << "OPCION 2" << endl;
        LimpiarHerramienta();
        system("pause");
    }
    break;
    /*******************************************************************/
    case 3:
    {
        system("cls");
        cout << "OPCION 3" << endl;
        system("pause");
    }
    break;
        /*******************************************************************/
    case 0:
    {
        system("cls");
        cout << "Saliste" << endl;
        system("pause");
        return;
    }
    break;
    /*******************************************************************/
    default:
    {
        system("cls");
        cout << "valor ingresado no existe dentro del menu" << endl;
        system("pause");
    }
    break;
        /*******************************************************************/
    }
}
///////////////////////////////////////////////////////////////////////////
void ListarDatos(int opcion)
{
    system("cls");

    while (true)
    {
        system("cls");
        cout << "Que quieres Listar?" << endl
             << endl;
        cout << "Opcion 1 ---> Plantas" << endl;       // Crear funcion que carge plantas a un Archivos
        cout << "Opcion 2 ---> Herramientas" << endl;  // Crear funcion que carge Herramientas a un Archivos
        cout << "Opcion 3 ---> Agro Quimicos" << endl; // Crear funcion que carge Agro Quimicos a un Archivos
        cout << "Opcion 0 ----> salir" << endl;
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
        /*******************************************************************/
        case 1:
        {
            system("cls");
            ListarPlanta();
            system("pause");
            // ARMAR UNA FUNCION QUE PERMITA CARGAR EN ARCHIVO Planta
            //  Planta ob1;
            //  ob1.Cargar();
        }
        break;
        /*******************************************************************/
        case 2:
        {
            system("cls");
            cout << "Listado de Herrramientas" << endl;
            ListarHerramienta();
            system("pause");
        }
        break;
        /*******************************************************************/
        case 3:
        {
            system("cls");
            cout << "OPCION 3" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        case 0:
        {
            system("cls");
            cout << "Saliste" << endl;
            system("pause");
            return;
        }
        break;
        /*******************************************************************/
        default:
        {
            system("cls");
            cout << "valor ingresado no existe dentro del menu" << endl;
            system("pause");
        }
        break;
            /*******************************************************************/
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void ContarRegistros(int opcion)
{
}
///////////////////////////////////////////////////////////////////////////
void CargarPlanta()
{
    int tam, tamanioRegistro = 0;
    ArchivoStockPlanta ClassAr("planta.dat");
    tamanioRegistro = ClassAr.contarRegistros();
    Planta ClassP;

    cout << "ingrese Cantidad de Registros" << endl;
    cout << "Cuantas quiere cargar" << endl;
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        // stock

        ClassP.Cargar(tamanioRegistro);
        tamanioRegistro++;
        cout << endl;
        if (ClassAr.grabarRegistro(ClassP) == false)
        {
            cout << "no pudo cargarse" << endl;
        }
    }
}
///////////////////////////////////////////////////////////////////////////
void CargarHerramienta()
{
    int tam, tamanioRegistro = 0;
    ArchivoStockHerramienta ClassAr("Herramientas.dat");
    tamanioRegistro = ClassAr.contarRegistros();
    Herramienta ClassP;

    cout << "ingrese Cantidad de Registros" << endl;
    cout << "Cuantas quiere cargar" << endl;
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        // stock

        ClassP.Cargar(tamanioRegistro);
        cout << endl;
        if (ClassAr.grabarRegistro(ClassP) == false)
        {
            cout << "no pudo cargarse" << endl;
        }
    }
}

///////////////////////////////////////////////////////////////////////////
void LimpiarPlanta()
{
    ArchivoStockPlanta ClassAr("planta.dat");

    if (!ClassAr.borrarRegistro())
    {
        cout << "no pudo borrrarlo" << endl;
    }
}
///////////////////////////////////////////////////////////////////////////

void LimpiarHerramienta()
{
    ArchivoStockHerramienta ClassAr("herramienta.dat");

    if (!ClassAr.borrarRegistro())
    {
        cout << "no pudo borrrarlo" << endl;
    }
}
///////////////////////////////////////////////////////////////////////////
void ListarPlanta()
{
    cout<<"enserio pasa aqui?"<<endl;
    ArchivoStockPlanta ClassAr("planta.dat");
    Planta ClassP;

    int tam = 0;

    tam = ClassAr.contarRegistros();

    for (int i = 0; i < tam; i++)
    {
        ClassP = ClassAr.leerRegistro(i);
        ClassP.Mostrar(); // MostrarRegistro
    }
}

// }
///////////////////////////////////////////////////////////////////////////
void ListarHerramienta()
{
    ArchivoStockHerramienta ClassAr("Herramientas.dat");
    int tam = 0;
    tam = ClassAr.contarRegistros();
    Herramienta h;
    for (int i = 0; i < tam; i++)
    {
        h = ClassAr.leerRegistro(i);
        h.Mostrar(); // MostrarRegistro esta a
    }
}
///////////////////////////////////////////////////////////////////////////
void setearDatos(Herramienta &herramienta)
{
    char n[30];
    float precio;
    int stock;
    bool estado;
    cout << "Nuevo Nombre: ";
    cargarCadena(n,30);
    herramienta.setNombre(n);
    cout << "Precio: ";
    cin >> precio;
    herramienta.setPrecio(precio);
    cout << "Precio: ";
    herramienta.setStock(stock);
    cout << "Para desacivar el producto ingrese 0, de lo contrario 1 : ";
    cin >> estado;
    herramienta.setEstado(estado);
}
void ModificarHerramienta()
{
    int tamanioRegistro=0 , posReg=0;
    ArchivoStockHerramienta ClassAr("Herramientas.dat");
    Herramienta herramienta;

    // ClassH = ClassP.getHerramienta();

    tamanioRegistro = ClassAr.contarRegistros();
    // cout<<"TOTAL DE REGISTROS= "<<max<<endl;
    cout<<tamanioRegistro<<endl;
    cout << "ingrese Posicion del Registro que quieren cambiar" << endl;
    cin >> posReg;

    if ((posReg > 0) && (posReg <= tamanioRegistro))
    {
        setearDatos(herramienta); // CargarRegistro
        if (ClassAr.reemplazarRegistroCompra(herramienta, posReg-1) == false)
        {
            cout << "No se pudo Borrar lo siento" << endl;
        }
    }
    else
    {
        cout << "la posicion que ingreso no existe" << endl;
    }
}
///////////////////////////////////////////////////////////////////////////
