#include<iostream>
using namespace std;

class demo {
    public:

  void swap(int a,int b){
      int tamp =*a;
      *a = *b;
      *b = tamp;
  }

};

int main(){
    int a,b;
    cout<<"enter a two number : ";
    cin>>a>>b;

  class demo d1;
  d1.swap(&a,&b);
    return 0;
}