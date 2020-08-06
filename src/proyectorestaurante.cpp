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
void menuDia(string[matrizMenu],string[menu][precio]){

    for (int i = 0; i < 5; i++)
    {
        cout<<menu[i]<<" valor LPS."<<precio[i]<<endl;
    }
}

int Vender(){
    menuDia();
    int cantidad;
    string menu[3];
    cout<<"Cuantos platillos ordenara:"<<endl;
    cin>>cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        cout<<"Ingrese el nombre del platillo "<<endl;
        cin>>menu[i];
    }
    cout<<"Por favor confirme que esta es su orden final y precione ENTER"<<endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout<<menu[i]<<endl;
    }
    
    cout<<"Espere 15 minutos mientras sale su orden"<<endl;
    cout<<"Aqui esta su orden"<<endl;
    cout<<"Buen Provecho!!"<<endl;
   
	return 0;
}
int facturacion(){
    int numero,Nordenes,factura;
    string menu[5];
    int precio[5];
    cout<<"Ingrese el numero de factura:";
    cin>>numero;
    cout<<"Ingrese la cantidad de ordenes que pidio el cliente:"<<endl;
    cin>>Nordenes;
    for (int i = 0; i < Nordenes; i++)
    {
        cout<<"Ingrese  el nombre de los platillos que consumio el cliente:"<<endl;
        cin>>menu[i];
        cout<<"Ingrese el precio que corresponde a ese platillo"<<endl;
        cin>>precio[i];
 
    }
     cout<<"El cliente consumio:"<<endl;
    for (int i = 0; i < Nordenes; i++)
    {
        cout<<menu[i]<<" con valor de" <<precio[i]<<endl;
    }
    cout<<"El total a pagar por el consumo hecho es de:"<<factura<<endl;
    cout<<"Presione ENTER para imprimir la factura al cliente"<<endl;

    return 0;
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
           cout<<Vender();
            break;
        case 4:
            cout<<facturacion();
            break;
        default:
        cout<<"Esta opcion no esta disponible"<<endl;
            break;
        }
    } while (opcion!=4);
    return 0;
}