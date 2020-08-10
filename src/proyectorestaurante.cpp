#include <iostream>
#include<string>
#include<iomanip>
#include <math.h>
#include <stdlib.h>
using namespace std;

struct platillos
{
    string Menu[5];
    int precio[5];
}m1;
void pedirmenu();
void mostrarmenu(platillos);

void pedirmenu(){
    cout<<"Ingrese el nombre de los platos y seguido su valor: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"plato #"<<i+1<<endl;
        cin>>(m1. Menu[i]);
        cout<<"Precio "<<endl;
        cin>>(m1. precio[i]);
    }
}
void mostrarmenu(platillos m){
    int cantidad, acumulador, opcion;
    string nombre;
    for (int i = 0; i < 5; i++)
    {
        cout<<m.Menu[i]<<" valor "<<m.precio[i]<<endl;
    }
    cout<<"Ingrese la cantidad de ordenes a vender: "<<endl;
    cin>>cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        cout<<"plato a vender # "<<i+1<<endl;
        cin>>m.Menu[i];
    }
}
int reservacion(){
    string dias[3];
    int i;
    cout << "********************************************************"<<endl;
    cout<<"Bienvenido a la reservacion para restaurante el DELFIN"<<endl;
    cout<<"**********************************************************" <<endl;
    cout<<"Detalle que dias desea poner disponible para reservaciones "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>dias[i];   
    }
    cout<<endl;
    cout<<"Los dias disponibles son: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<dias[i]<<endl;
    }
    cout<<endl;
    return 0;
}
int main(){
    int opcion;
    cout<<endl;
    cout << "***************************************************"<<endl;
    cout<<"=========BIENVENIDO A RESTAURANTE EL DELFIN========="<<endl;
    cout<<  "***************************************************"<<endl;
    do
    {
        cout<<endl;
        cout<<"******ELIJA UNA OPCION SEGUN SEA SU CASO*****"  <<endl;
        cout <<"********************************************"  <<endl;
        cout<<"[1].............Crear platillos............."   <<endl;
        cout<<"[2].........Crear detalles para reservacion."   <<endl;
        cout<<"[3].................VENDER.................."   <<endl;
        cout<<"[4]...............ESTADISTICA..............."   <<endl;
        cout <<"********************************************"  <<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            pedirmenu();
            break;
        case 2:
            cout<<reservacion();
            break;
        case 3:
            mostrarmenu(m1);
            break;
        case 4:
            break;
        default:
        cout<<"Esta opcion no esta disponible"<<endl;
            break;
        }
    } while (opcion!=4);
    return 0;
}