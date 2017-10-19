#include "equipo.h"
#include <iostream>
using namespace std;

equipo::equipo(string n,int t)
{
    nombre=n;
    tam=t;
}
void equipo::VerNombreE()
{

    cout<<"NOMBRE DE EQUIPO:  "<<nombre<<endl;
}
int equipo::getTam()
{
    return tam;
}

void equipo::print()
{
    jugadores[i].setNombre();
    /*jugadores[i].VerNombre();
    jugadores[i].VerPosicion();
    jugadores[i].InAgresividad();*/

}

