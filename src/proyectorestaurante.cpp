#include<iostream>
#include<string>
#include<iomanip>
#include <math.h>
using namespace std;

int reservar(){
    string Ncompleto;
    int Nmesa, horario, opcion;
    string atencion[3]{"[1]=viernes","[2]=sabado","[3]=domingo"};
    cout<<"Por favor ingrese su pinche nombre completo: "<<endl;
    getline(cin, Ncompleto);
    cout<<"Bienvenido "<<Ncompleto<<endl;
    cout<<endl;
    cout<<"Los dias disponibles para reservar son: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<atencion[i]<<endl;
    }
    cout<<"Para que dia desea su reservacion : "<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        cout<<"Su reservacion se hizo para el dia "<<atencion[0]<<endl;
        break;
    case 2:
        cout<<"Su revervacion se hizo para el dia "<<atencion[1]<<endl;
        break;
    case 3:
        cout<<"Su reservacion se hizo para el dia  "<<atencion[2]<<endl;
        break;
    default:
        break;
    }
    return;
}
int menu(){
    int compras, opciones, total, subtotal, isv,dato;
    double const ISV=0.15;
    string arreglo[5]{"Langosta","Pescado Frito","Sopa de caracol","Almejas","Filete"};
    int precio[5]{150,200,160,250,140};
    cout<<"Bienvenido a Restaurante DELFIN porfavor elija el menu del dia: "<<endl;
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<i+1<<"."<<arreglo[i]<<"---Valor--->"<<" Lps"<<precio[i]<<endl;
    }
        cout<<"Elija cuantos platos desea mostrar para este dia"<<endl;
        cin>>opciones;
        cout<<endl;
        cout<<"Usted ha decidido mostrar "<<opciones<<" Ordenes en el menu el dia de hoy"<<endl;
    for (int i = 0; i < opciones; i++)
    {
        cout<<"Por favor Ingrese la orden # "<<i+1<<endl;
        cin>>arreglo[i];
        if (i==1)
        {
            cout<<arreglo[0]<<"--Valor--"<<precio[0]<<endl;
        }
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
    cout<<"3.Crear reservacion"<<endl;
    cout<<"1.Crear los platos del dia "<<endl;
    cout<<"2.Listar los platos del dia"<<endl;
    cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"Por favor haga su reservacion"<<endl;
            cout<<reservar();
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