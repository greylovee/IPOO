#include "fecha.h"
#include <iostream>
using namespace std;

fecha::fecha(int m,int a,int d )

{
    mes=m;
    anho=a;
    dia=d;
}

void fecha::bisiesto()
{

    if (anho%4 == 0 && (anho%100!= 0  || anho%4==0))
        cout<<"anho bisiesto"<<endl;
    else
        cout<<"anho no bisiesto"<<endl;
}
void fecha:: fechatrue()
{
    if (mes >=1 && mes <=12)
    switch (mes)
    {
        case 1:
            }


}

