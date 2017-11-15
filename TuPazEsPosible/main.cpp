#include <iostream>
#include "inicio.h"
#include "menu.h"
#include "altas.h"
using namespace std;

int main()
{
    inicio a;
    a.portada();
    menu b;
    b.Menu();
    b.validar();
    altas c;
    c.portada();
    c.Guardar();


}
