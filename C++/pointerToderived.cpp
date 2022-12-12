#include<iostream>
using namespace std;

class base{
   public :
   int base1;
    virtual void  getdata(){
       cout<<"you enter nume is :"<<base1;
       
   }

};
   
class derived : public base{
   int derived1=5;
   public :
   void getdata(){
       cout<<" the value of you entar is "<<derived1<<endl;
   }
};

int main(){
    base * base_pointr;
    base obj_base;
    derived obj_derived;
     base_pointr=&obj_derived;
       
    
    // base_pointr->sedata(9);
    base_pointr->base1=4;
    // base_pointr *derived_pointer;
    // base_pointr->
    base_pointr->getdata();
    return 0;
}