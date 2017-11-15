#include "altas.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
altas::altas()
{
    //ctor
}
void altas :: portada()
{
    cout<<"\t\t\tALTA NUEVA"<<endl;
    cout<<"\t\t\t----------"<<endl;
}

void altas :: Guardar()
{
    fstream archivo("1.txt");
    //char nombre[30],apellidos[30],direccion[30];
    int op,op2;

        cout<<"1.- ALTA NUEVA"<<endl;
        cout<<" 2.-SALIR"<<endl;
        cin>>op;
        system("cls");


        if(op==1)
        {
            if(!archivo.is_open())
            {
                archivo.open("1.txt",ios::out);
            }
            cout<<"NOMBRE     :";
            cin>>nombre;
            cout<<"APELLIDOS  : ";
            cin>>apellidos;
            cout<<"F. NACIMIENTO  :";
            cin>>dia>>mes>>anho;
            cout<<"DIRECCION  : ";
            cin>>domicilio;
            cout<<"TELEFONO   : ";
            cin>>movil;
            cout<<"INFORMACION    :  ";
            cin>>info;
            cout<<"------------------"<<endl;
            cout<< "1.- GUARDAR REGISTRO"<<endl;
            cout<<"2.- REGRESAR"<<endl;
            cin>>op2;
            if(op2 == 1)
            {
                archivo <<"NOMBRE   : "<<nombre<<endl;
                archivo <<"APELLIDO :"<<apellidos<<endl;
                archivo <<"F.NACIMIENTO  :"<<dia<<mes<<anho<<endl;
                archivo <<"DIRECCION :"<<domicilio<<endl;
                archivo <<"TELEFONO :"<<movil<<endl;
                archivo <<"INFORMACION:"<<info<<endl;

                system("cls");

                cout<<"REGISTRO GUARDADO CON EXITO...\n";

            }
                }

          }

