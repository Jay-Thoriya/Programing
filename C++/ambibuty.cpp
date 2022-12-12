#include<iostream>
using namespace std;

class base1
{
  public :
  void display(){cout<<" this is base1 class called funtion"<<endl;}
};
class base2
{
  public :
  void display(){cout<<" this is base2 class called funtion"<<endl;}
};
class derived : public base1,public base2{
  public :
     void display(){
       base1::display();
   }
};

int main(){
    base1 b1;
    b1.display();
    base2 b2;
    b2.display();
    derived d1;
    d1.display();
    
    return 0;
}