#include <iostream>

using namespace std;
/*class integer{
public:
    int val;
    integer(int v=0){

        this -> val=val;
        //val=v;
        cout<<"integer default constructor"<< val <<endl;
        }
    };
 class integerWrapper{
 public:
     integer val;
     integerWrapper(){
        cout<<"integerWrapper default constructor"<<endl;
        }
};
int* getptrtoFive(){
    int*x= new int;
    *x= 5;
    return x;
    }*/
class point{
public:
    int x,y;
    point(){
        //x=0;
        //y=0;
        cout<<"constructor invoked"<<endl;
        }
    ~point(){
        cout<<"destructor invoked"<<endl;
        }
};
int main()
{
    point *p=new point;
    delete p;
    /*int numItems;
    cout<< "how many items? ";
    cin>>numItems;
    int *arr = new int [numItems];
    for(int i=0;i<numItems;i++){
        cout<<"enter items"<< i << ": ";
        cin >> arr[i];
    }
    for (int i=0;i<numItems; i++){
        cout<<arr[i]<<endl;
    }
    delete[] arr;


    int *p;
    for(int i=0; i<4; ++i){
        p= getptrtoFive();
        cout<< *p <<endl;
    }*/


    //integerWrapper q;
    //integer i[3];
    //integer i(3); //error
    //integer j=5;
    return 0;
}
