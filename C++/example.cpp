#include<iostream>
using namespace std;

class test
{
  int b;
  int a;
  public :
   test(int i,int j){
       a=i;
       b=j;
      cout<<"value of a is : "<<a<<endl;
      cout<<"value of b is : "<<b<<endl;
   }
};

int main(){

    test t1(2,4);

    
    return 0;
}