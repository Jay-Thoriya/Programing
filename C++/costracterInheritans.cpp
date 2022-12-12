#include<iostream>
using namespace std;

class Base1{
    int base1;
    public :
      Base1(int i){
          base1=i;
        cout<<"it time to called base1 class :::::"<<endl;
    }
     void printbase1(){
        cout<<"the value of base1 is "<<base1<<endl;
    }
};

class Base2{
    int base2;
    public :
      Base2(int j){
          base2=j;
        cout<<"it time to called base2 class :::::"<<endl;
    }
     void printbas2(){
        cout<<"the value of base1 is "<<base2<<endl;
    }
};

class derivad : public Base1 ,public Base2{
    int base3,base4;
    public :
    derivad(int a,int b,int c,int d):Base1(a),Base2(b){
          base3=c;
          base4=d;
        cout<<"it time to called base3 class :::::"<<endl;
        cout<<"it time to called base4 class :::::"<<endl;
    }
     void printderivad(){
        cout<<"the value of base3 is "<<base3<<endl;
        cout<<"the value of base4 is "<<base4<<endl;
    }
};

int main(){
    // d1.printbase1();
    derivad d1(20,60,80,50);
    d1.printbase1();
    d1.printbas2();
    d1.printderivad();

    return 0;
}