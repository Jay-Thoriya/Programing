#include<iostream>
using namespace std;

class complex {
   int a,b;
   public :
 complex(int ,int );
    void display(){
        cout<<"the equvatiion is :"<<a<<" + "<<b<<"i"<<endl;
    }
};
 complex :: complex (int x,int y){
    a=x;
    b=y;
}
int main(){
 complex c1(3,5);
 complex : complex c2(4,5);
    c1.display();
    c2.display();

    return 0;
}