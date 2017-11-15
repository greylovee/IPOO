#ifndef ALTAS_H
#define ALTAS_H
#include <iostream>
using namespace std;


class altas
{
private:
    char nombre[30];
    char apellidos[30];
    char domicilio[30];
    int movil;
    int dia,mes,anho;
    char info[150];
public:
    altas();
    void portada();
    void Guardar();
};

#endif // ALTAS_H
