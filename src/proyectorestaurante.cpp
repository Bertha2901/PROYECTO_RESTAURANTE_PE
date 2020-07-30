#include<iostream>
#include<string>
#include<iomanip>
#include <math.h>
using namespace std;

int menu(){
    int compras, opciones, total, subtotal, isv;
    double const ISV=0.15;
    char seguir;
    string arreglo[5]{"Langosta","Pescado Frito","Sopa de caracol","Almejas","Filete"};
    int precio[5]{150,200,160,250,140};
    cout<<"Bienvenido a Restaurante DELFIN porfavor elija el menu del dia: "<<endl;
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<i+1<<"."<<arreglo[i]<<"---Valor--->"<<" Lps"<<precio[i]<<endl;
    }
    cout<<"Elija cuantos platos quiere hoy para su menu: "<<endl;
    cin >>opciones;
    for (int i = 0; i < opciones; i++)
    {
        cout<<"Por favor ingrese las opciones para el dia de hoy: "<<endl;
        cin >>arreglo[i];
    }
    return 0;
}   
int main(){
    int opcion, Nmesa, platillos, saludo;
    string nombre;
    string Nmesas[6]{"Mesa 1","Mesa 2","Mesa 3","Mesa 4","Mesa 5","Mesa6 "};
    cout<<endl;
    cout<<"          ==================================================          "<<endl;
    cout<<"                  BIENVENIDO A RESTAURANTE EL DELFIN                  "<<endl;
    cout<<"          ==================================================          "<<endl;
    cout<<"Por favor ingrese la opcion segun sea su caso:"<<endl;
    cout<<"1.Ya cuenta con reservacion"<<endl;
    cout<<"2.No cuenta con reservacion"<<endl;
    cout<<"3.Orden para llevar"<<endl;
    cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"Ingrese el nombre para validar su reservacion:"<<endl;
            cin >>nombre;
            if (nombre=="bertha")
            {
                cout<<"La reservacion esta a nombre de bertha, la mesa asignada es:"<<Nmesas[6][4]<<endl;
            }
            else
            {
                cout<<"Esa reservacion no existe"<<endl;
            }
            cout<<menu()<<endl;
            break;
        case 2:
           cout<<"========================================================================"<<endl;
           cout<<"A continuacion se le mostrara las mesas que estan y no estan disponibles:"<<endl;
             for (int i = 0; i < 4; i++)
                {
                    cout<<"Mesa "<<Nmesas[i]<<"    Si esta Disponible"<<endl;   
                }
           cout<<"Las mesas no disponiles son: "<<endl;
              for (int i =5; i < 10; i++)

                {
                    cout<<"Mesa "<< Nmesas[i]<<"  No se encuentra disponible"<<endl;
                    if (i>=5 && i<=10)
                    {
                        cout<<"La mesa solicitada no esta disponible";
                    }
                    else
                    {
                        cout<<"solicite una nueva mesa"<<endl;
                    }
                }
           cout<<"Que numero de mesa desea: ";
           cin >>Nmesas[6];
           cout<<"Elija el menu de su gusto";
           cout<<menu()<<endl;
           break;

        case 3:
           cout<<"Que desea para llevar: ";
           cout<<menu()<<endl;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }   
    return 0;
}