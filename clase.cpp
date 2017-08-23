#include <iostream>
using namespace std;
int main ()
{
    /*
    //EJERCICIO AÑOS BISIESTOS
    int anho;
    cout<<"ingrese el anho "<<endl;
    cin>> anho;
    if (anho%4 == 0 && (anho%100!= 0  || anho%4==0))
        cout<<"anho bisiesto"<<endl;
    else
        cout<<"anho no bisiesto"<<endl;
     */

    //EJERCICIO NUMEROS PRIMOS
    
    int num;
    cout<<"ingrese el numero"<<endl;
    cin>>num;
    int a=1, cont=0;
        while(a<=num)
        {
            while (num%a==0)
                cont++;
                a++;
            if (cont == 2)
                cout<<"numero primo"<<endl;
        }
}
}
