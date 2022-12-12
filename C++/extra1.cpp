#include<iostream>
using namespace std;

class demo{

  public:
  int a,b;
  
  demo(int a, int b){
    if(a>b)
     cout<<(" a is greater number");
    else 
    cout<<(" b is greater number ");
    a==9;
    cout<<a;

  }

};

int main(){
    
    
    demo d1(51,6);

    return 0;
}