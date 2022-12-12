#include<iostream>
using namespace std;

int sum(int a){
   return a;
}

int sum(int a ,int b ){
  return a+b;
}


int sum(int a ,int b ,int c){
  return a+b+c;
}

int main(){
  int a,b,c;
  cout<<"enter the number a is "<<endl;
  cin>>a;
  cout<<"enter the number b is "<<endl;
  cin>>b;
  cout<<"enter the number c is "<<endl;
  cin>>c;
  cout<<"the sum of a is :"<<sum(a)<<endl;
  cout<<"the sum of a and b is :"<<sum(a,b)<<endl;
  cout<<"the sum of a ,b and c is :"<<sum(a,b,c)<<endl;
  return 0;
}