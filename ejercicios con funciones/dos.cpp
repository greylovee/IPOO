//Implementar un programa que solicite un n´umero n e imprima los n´umero
//desde el 1 hasta n separados por comas. OJO, despues del ´ultimo n´umero no debe imprimir
//la ’,’.


#include <iostream>
using namespace std;
void  secuencia(int num)
{
    for(int i=1; i < num;i++ )
        cout <<i<<",";
    cout<< num;
}
int main()
{
    secuencia(6);
}
