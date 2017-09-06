#include <iostream>

using namespace std;

bool primos(int num)
{
    int a;
    for(int i=1;i<num+1;i++){
         if(num%i==0)
             a++;
    }
         if(a!=2)
              return false;
            else
                return true;

}

int main()
{
    int num;
    cout<<"ingrese el numero"<<endl;
    cin>>num;
    if(primos(num))
        cout<<"es primo"<<endl;
    else
        cout<<"no es primo"<<endl;
}
