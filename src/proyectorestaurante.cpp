#include <iostream>
#include<string>
#include<iomanip>
#include <math.h>
#include <stdlib.h>
using namespace std;
int matrizMenu(){
    string menu[5];
    int precio[5];
    cout<<"A continuacion ingrese el nombre de los platos que desea mostrar y seguido su valor en LPS : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>menu[i]>>precio[i];
    }
    cout<<endl;
    cout<<"Los platos a presentar este dia son: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<menu[i]<<" valor LPS."<<precio[i]<<endl;
    }
    return 0;
}
void menuDia(string menu[], int precio[]){// recibir parametros
        for (int i = 0; i < 5; i++)
    {
        cout<<menu[i]<<" valor LPS."<<precio[i]<<endl;
    }
}
int reservacion(){
    string dias[3];
    int i;
    cout<<"Bienvenido a la reservacion para restaurante el DELFIN"<<endl;
    cout<<endl;
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
    cout<<"=====BIENVENIDO A RESTAURANTE EL DELFIN====="<<endl;
    do
    {
        cout<<endl;
        cout<<"ELIJA UNA OPCION SEGUN SEA SU CASO "<<endl;
        cout<<"[1] Crear platillos "<<endl;
        cout<<"[2] Crear detalles para reservacion "<<endl;
        cout<<"[3] VENDER ";
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<matrizMenu();
            break;
        case 2:
            cout<<reservacion();
            break;
        case 3:
            cout<<endl;
            break;
        default:
        cout<<"Esta opcion no esta disponible"<<endl;
            break;
        }
    } while (opcion!=4);
    return 0;
}