#include "menu.h"
#include <iostream>
#include <cstdlib>
using namespace std;
menu::menu()
{
    //ctor
}
void menu :: Menu()
{
    cout<<"\t\t\tBIENVENIDO A TU PAZ ES POSIBLE"<<endl;
    cout<<"\t\t\t------------------------------"<<endl;
    cout<<"[1]. ALTAS "<<endl;
    cout<<"[2]. BAJAS "<<endl;
    cout<<"[3]. SALIDAS"<<endl;
    cout<<"[4]. ENTRADA"<<endl;
    cout<<"[5]. BUSCAR"<<endl;


}
void menu :: validar()
{
    cout<<"INGRESE OPCION  :  ";
    cin>>opc;
    if (opc >5 || opc < 1 )
        cout<<"OPCION INCORRECTA"<<endl;
    else
        system("cls");

}
