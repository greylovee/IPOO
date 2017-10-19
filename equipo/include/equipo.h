#ifndef EQUIPO_H
#define EQUIPO_H
#include "jugador.h"
#include <iostream>
using namespace std;
class equipo
{
    public:
        string nombre;
        int tam;
        jugador jugadores[11];

        equipo();
        equipo(string n,int t);
        void VerNombreE();
        int getTam();
        void print();


};

#endif // EQUIPO_H
