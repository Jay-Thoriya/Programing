#include<iostream>
using namespace std;

class B
{
  int a=50;
  public :
  friend class A ;
  
  int b=50;
};

class A : B
{
  int y=100;
  public :
  
  void show (void);

  int x=100;
};

  void  A :: show (void){
    
    cout<<" the is a :"<<a<<" and this is b :"<<b<<endl;
    cout<<" the is x :"<<x<<" and this is y :"<<y<<endl;
}

int main(){
     class A a1;
    a1.show();

    class B b1;
    return 0;
}