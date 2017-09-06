#include <iostream>

using namespace std;

bool bisiesto(int anho)
{
    if (anho%4 == 0 && (anho%100!= 0  || anho%4==0))
        return true;
    else
        return false;
}

int main()
{
    int anho;
    cout<<"ingrese el anho"<<endl;
    cin>>anho;
    if(bisiesto(anho))
        cout<<"es bisiesto"<<endl;
    else
        cout<<"no es bisiesto"<<endl;
}
