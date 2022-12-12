 /* #include<iostream>
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
} */

#include<iostream>
using namespace std;

// cylinder 3.14*r*r*h , cube a*a*a , rectangular l*b*h ; 

int volum(int h,int r){
    
    return (3.14*r*r*h);
}

int volum(int l){
    return l*l*l;
}

int volum(int l,int b, int h){
    return l*b*h;
}
  

int main(){
    int l,b,h,r;
    cout<<"enter the number l is "<<endl;
  cin>>l;
   cout<<"enter the number r is "<<endl;
  cin>>r;
  cout<<"enter the number b is "<<endl;
  cin>>b;
  cout<<"enter the number h is "<<endl;
  cin>>h;
     cout<<"the volum is tube "<<volum(l)<<endl;
    cout<<"the volum is selinder "<<volum(h,r)<<endl;
    
    cout<<"the volum is retengal "<<volum(l,b,h)<<endl;
    return 0;
}