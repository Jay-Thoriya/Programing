#include<iostream>
using namespace std;

int main(){
       int a=4;
       int *ptr = &a;
       cout<<" print "<<*ptr;
       int *p=new int(33); // new creating a veriabel using new keywords .
       delete p;  // garbej value when delete keyword used .
       cout<<" print "<<*p;
       return 0;
}