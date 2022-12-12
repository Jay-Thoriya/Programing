#include<iostream>
#include<cmath>
using namespace std;

class simplecalculetr {
  int a,b ;
  public :
  void getdatasimple();
  void parfromsimpleCalculetr();
};
  void simplecalculetr ::getdatasimple(){
      cout<<" Enter value of a : ";
      cin>>a;
      cout<<" Enter value of b : ";
      cin>>b;
  }
  void simplecalculetr ::parfromsimpleCalculetr(){
      cout<<" the value of A + B is "<< a + b <<endl;
      cout<<" the value of A - B is "<< a - b <<endl;
      cout<<" the value of A * B is "<< a * b <<endl;
      cout<<" the value of A / B is "<< a / b <<endl;
  }
class scientifaccalculetr {
  int a,b ;
  public :
  void getdatascientifac();
  void parfromscientifacCalculetr();
};
   void scientifaccalculetr ::getdatascientifac(){
      cout<<" Enter value of a : ";
      cin>>a;
      cout<<" Enter value of b : ";
      cin>>b;
  }
  void scientifaccalculetr ::parfromscientifacCalculetr(){
         cout<<" the value of sin(a) is "<< sin(a) <<endl;
      cout<<" the value of cos(b) is "<< cos(b)<<endl;
      cout<<" the value of tan(a) is "<< tan(a) <<endl;
      cout<<" the value of cot(b) is "<< exp(b) <<endl;
  }
 class hybrid : public simplecalculetr , public scientifaccalculetr {

 } ;
int main(){
    hybrid h1;
    h1.getdatasimple();
    h1.parfromsimpleCalculetr();
    h1.getdatascientifac();
    h1.parfromscientifacCalculetr();
    return 0;
}