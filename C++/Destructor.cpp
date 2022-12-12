#include<iostream>
using namespace std;

class num{
 int  count =0;
 public :
   
   num(){
       count++;
       cout<<"this is a constructor is called !!!"<<count<<endl;
   }
   
    ~num(){
        cout<<" this is a destuructor is called !!!"<<count<<endl;
        count--;
    }
    void show(){
        cout<<"this is a show count number "<<count<<endl;
    }

};

int main(){
    num n1;
    {
        num n2, n3;
        n2.show();
        n3.show();
    }
    n1.show();
  //  n2.show(); error(suggested alternative (n1));
  
  //  n3.show(); error(suggested alternative (n1));
    return 0;
}