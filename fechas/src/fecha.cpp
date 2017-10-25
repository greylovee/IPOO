#include "fecha.h"
#include <iostream>
using namespace std;

fecha::fecha(int m,int a,int d )

{
    dia=d;
    mes=m;
    anho=a;

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
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(dia >=1 && dia <=31)
                cout<<"fecha correcta"<<endl;
            else
                cout<<"fecha incorrecta"<<endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (dia >=1 && dia <=30)
                cout<<"fecha correcta"<<endl;
            else
                cout<<"fecha incorrecta"<<endl;


        case 2:
            if (dia>=1&& dia <=28)
                cout<<"fecha correcta"<<endl;
            else
                cout<<"fecha incorrecta"<<endl;
    }
    else
            cout<<"fecha incorrecta"<<endl;


}

