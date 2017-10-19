#include "jugador.h"
#include <iostream>
using namespace std;

jugador::jugador(string n,string po,int num,int a){
    nombre=n;
    posicion=po;
    numero=num;
    agresividad=a;
}
void jugador::VerNombre()
{
    cout<<nombre<<endl;
}
void jugador::VerDorsal()
{
    cout<<numero<<endl;
}
void jugador::InAgresividad()
{
    cout<<agresividad<<endl;
}
void jugador::VerPosicion()
{
    cout<<posicion<<endl;
}
