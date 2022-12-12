#include<iostream>
using namespace std;

class complex;

class calculater{
    public :            
     
      int sumcomplex(complex ,complex);


};


class complex{
    int a,b;
    friend  class calculater ;
    //friend int calculater ::sumcomplex(complex o1,complex o2);
    public:
    void setdata(int n1 ,int n2){
        a=n1;
        b=n2;
    }
    void printdata(){
        cout<<" the entre number is "<<a<<" + "<<b<<endl;
    }
};


      int calculater :: sumcomplex(complex o1,complex o2){
          return ((o1.a)+(o2.a));

      }

int main(){
    complex o1,o2;
    o1.setdata(2,4);
    o2.setdata(6,7);
    calculater cal;
    int res =cal.sumcomplex(o1,o2);
    cout<<" the sum of o1 and 02  is :"<<res;
    return 0;
}