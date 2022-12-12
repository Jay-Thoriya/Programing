#include<iostream>
using namespace std;

class base {
    protected :
    int a;
    // private :
    public :
    int b;
    int c;
    
    void display(){
      cout<<"the number "<<a<<" , "<<b<<" , "<<c<<endl;
    }
};
class diraved1 : protected base {
public :
        void display();
 
};

class diraved2 : private base {
public :
        void display();
   
};

class diraved3 : public base {
public :
        void display();
        
   
};
int main(){
   diraved1 d1;
   diraved1 d2;
   diraved1 d3;
  d1.display();
  //  d2.display();
  //  d3.display();
  return 0;
}