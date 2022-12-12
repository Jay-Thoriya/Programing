#include<iostream>
using namespace std;

class A
{

 int a;
 public:
   A & setdata(int a){
    this->a=a;
    return *this;
   }
   void getdata(){
       cout<<" the value of a is : "<<a<<endl;
   }
};

int main(){
    A a1 ;
    a1.setdata(6).getdata();
    a1.getdata();

    return 0;
}