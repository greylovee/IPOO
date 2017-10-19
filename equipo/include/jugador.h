#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
using namespace std;

class jugador
{
    public:
        jugador();
        string nombre,posicion;
        int numero,agresividad;
        jugador(string n,string po, int num,int a);
        void VerNombre();
        void VerDorsal();
        void InAgresividad();
        void VerPosicion();

        void setNombre(string n) {
            nombre = n;
        }
        void setPos(string pos){
            posicion = pos;
        }
        void setNum(int n){
            numero = n;
        }
        void setAgg(int n) {
            agresividad = n;
        }


};

#endif // JUGADOR_H
