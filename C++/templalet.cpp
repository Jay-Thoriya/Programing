#include<iostream>
using namespace std;
template <class t1=int,class t2=float>
class base
{
   t1  a;
   t2  b;
   public :


    base(t1 x,t2 y){
        a=x;
        b=y;
    }
    void diaplay();
    void diaplay();
};

// void display(){
//     cout<<"this iis the fumnction";      ovear loding
// }


template <class t1,class t2>
void base<t1,t2>::diaplay()
   {
        cout<<"\t"<<a<<endl;
        cout<<"\t"<<b<<endl;
    }

int main(){
    // base<int,float> h1(3,5.7);
    // h1.diaplay();
    
    base<double,char> h1(9.90,'f');
    h1.diaplay();
    
    return 0;
}