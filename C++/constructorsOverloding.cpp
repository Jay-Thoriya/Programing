#include<iostream>
using namespace std;

class simpla
{
  int a,b,c;
  public :
   simpla(int x,int y,int z);
   simpla(int x,int y);
   simpla(int x);
   simpla();
   void display(){
       cout<<" the value of a :"<<a<<" ,b :"<<b<<" and c :"<<c<<endl;
   }
};

simpla :: simpla(int x ,int y, int z){
     a=x;
     b=y;
     c=z;
   }
   
 simpla ::  simpla(int x ,int y){
     a=x;
     b=y;
     c=0;
   }
    
  simpla :: simpla(int x ){
     a=x;
     b=0;
     c=0;
   }
   
  simpla:: simpla(){
       a=0;
       b=0;
       c=0;
   }
   
int main(){
    simpla c1(20,40,50);
    c1.display();
    simpla c2(20,40);
    c2.display();
    simpla c3(20);
    c3.display();
    
    

    return 0;
}