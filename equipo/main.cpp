#include <iostream>
#include "jugador.h"
#include "equipo.h"
#include<string.h>
using namespace std;

int main()
{
    equipo e1("Atletico de Madrid",2);
    e1.VerNombreE();
    e1.getTam();

    for(int i=0;i<e1.getTam();i++){
        e1.jugadores[0].setNombre("griezmann");
        e1.jugadores[0].setPos("delantero");
        e1.jugadores[0].setNum(i);
        e1.jugadores[0].setAgg(6);

    }

    e1.print();
}





