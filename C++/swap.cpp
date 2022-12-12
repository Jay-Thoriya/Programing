#include<iostream>
using namespace std;

class c2;
class c1
{
  int  val1;
  
  public :
  friend void exchanig(c1 &,c2 &);
  void setdata(int n1){
      val1=n1;
  }
  void displaydata(){
      cout<<"the val of c1 member"<<val1<<endl;
  }
};

class c2
{
  int  val2;
  friend void exchanig(c1 &,c2 &);
  public :
  void setdata(int n1){
      val2=n1;
  }
  void displaydata(){
      cout<<"the val of c1 member"<<val2<<endl;
  }
};

void exchanig(c1 & x,c2 & b){
    int temp=x.val1;
    x.val1=b.val2;
    b.val2=temp;

}
int main(){
     c1 oc1;
     c2 oc2;
     oc1.setdata(34);
     oc2.setdata(67);
     exchanig(oc1,oc2);

     cout<<" the number for c1 is ";
     oc1.displaydata();
     cout<<" the number for c2 :";
     oc2.displaydata();


        
    return 0;
}