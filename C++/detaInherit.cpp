#include<iostream>
using namespace std;
    
class dase{
    int deta1;
    public :
    int deta2;
    void setdata();
    int getdata1();
    int getdata2();
};

void dase :: setdata(){
    deta1 = 10;
    deta2 = 20;
}

int dase :: getdata1(){
    return deta1;
}


int dase :: getdata2(){
    return deta2;
}

class diraved : public dase{
  public :
  int deta3;
  void procces(){ deta3 = deta2 * getdata1();}
  void display();
};

void diraved :: display(){
    cout<<"the value of date1 is 👉🏻"<<getdata1()<<endl;
    cout<<"the value of date2 is 👉🏻"<<deta2<<endl;
    cout<<"the value of date3 is 👉🏻"<<deta3<<endl;
}
int main(){
    diraved d1;
    d1.setdata();
    d1.getdata1();
    d1.getdata2();
    // d1.procces();  the value is garbeg value 😎
    d1.display();
    return 0;
}