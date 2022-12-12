#include<iostream>
using namespace std;
class student {
   protected :
   int rollnumber ;
   public :
    void setrollnumber(int r){
        rollnumber = r;
    }
    void printrollnumber(){
        cout<<" you roll number is :"<<rollnumber<<endl;
    }
};
class exam : virtual public student {
    protected:
    int maths , physics ;
    public :
     void setmarks(int m,int p){
         maths=m;
         physics=p;
     }
     void printmarks(){
         cout<<"you maths marks is :"<<maths<<endl;
         cout<<"you  physics marks is :"<<physics<<endl;
     }
};
class sport : virtual public student{
    protected :
    int scoar;
    public :
     void setscoar(int s){
        scoar=s;
     }
     void printscoar(){
         cout<<" you pt scour is : "<<scoar<<endl;
     }
};
class result : public sport,public exam{
   protected:
   int total ;
   public :
    void settotal(){
        total = maths+physics+scoar;
    }
    void printtotal(){
        cout<<"you total marks is : "<<total<<endl;
    }
};
int main(){
    result r1;
    r1.setrollnumber(210);
    r1.setmarks(90,68);
    r1.setscoar(9);
    r1.settotal();
    r1.printrollnumber();
    r1.printmarks();
    r1.printscoar();
    r1.printtotal();
    return 0;
}