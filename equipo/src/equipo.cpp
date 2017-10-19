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
    for(int i=0;i<tam;i++) {
    jugadores[i].VerDorsal();
    jugadores[i].VerNombre();
    jugadores[i].VerPosicion();
    jugadores[i].InAgresividad();
    }
}

