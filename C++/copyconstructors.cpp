#include<iostream>
using namespace std;

class number
{
  int a;
  public: 
   
    number (int n){
        a=n;
    }

    
    number (){
        a=0;
    }

    number (number &obj ){
        cout<<"using copy consturter !!!"<<endl;
        a =obj.a;

    }

    void displaynumber(){
        cout<<"the your number is :"<<a<<endl;
    }
};

int main(){
    number b1(3);
    b1.displaynumber();
    number b2(9);
    b2.displaynumber();
    number z1(b1);
    z1.displaynumber();
    number z2 = b2;
    z2.displaynumber();
    return 0;
}