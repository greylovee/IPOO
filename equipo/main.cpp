#include <iostream>
#include "jugador.h"
#include "equipo.h"
#include<string.h>
using namespace std;

int main()
{
    equipo e1("Atletico de Madrid",2);
    e1.VerNombreE();
    //e1.SetTam();

    //for(int i=0;i<equipo.SetTam();i++){
        jugador j("griezmann","delantero",7,6);
        j.VerNombre();
        j.VerPosicion();
        j.VerDorsal();
        j.InAgresividad();
    }

    /*jugador j("griezmann","delantero",7,6);
    j.VerNombre();
    j.VerPosicion();
    j.VerDorsal();
    j.InAgresividad();*/



