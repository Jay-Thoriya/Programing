#include<iostream>
using namespace std;

class students {
   int rollnumber ;
   string name ;
   public :
    void setdata(int , string);
    void getdata();
};
   void students ::setdata(int r,string n){
       rollnumber =r;
       name = n;
   }
   void students ::getdata(){
       cout<<"your student name is : "<<name<<endl;
       cout<<name<<" rollnumber  is : "<<rollnumber<<endl;
   }
 
class exam : public students{
   int maths , physics , chemestrey ;
   public :
   void setmaks(int ,int,int);
   int sum(){
       return maths+physics+chemestrey;
   }
   void getmaks();
};
  void exam ::setmaks(int p,int c,int m){
      physics=p;
      chemestrey=c;
      maths=m;
  }
  void exam ::getmaks(){
      cout<<"student physics marks is 100 out of : "<<physics<<endl;
      cout<<"student chemestrey marks is 100 out of : "<<chemestrey<<endl;
      cout<<"student maths marks is 100 out of : "<<maths<<endl;
  }

class result : public exam{
   double total  ;
   public :
   void totalresult();
};
   void result ::totalresult(){
       cout<<"youe marks is :"<<sum()/3;
   }
int main(){
    int r,m,p,c;
    string n; 
    result R1;
    cout<<" enter you name : ";
    cin>>n;
    cout<<" enter you rollnumber : ";
    cin>>r;
    R1.setdata(r,n);
    cout<<" enter you physics marks : ";
    cin>>p;
    cout<<" enter you maths  marks : ";
    cin>>m;
    cout<<" enter you chemestry marks : ";
    cin>>c;
    R1.setmaks(p,c,m);
    R1.sum();
    cout<<"✨✨✨✨✨✨✨✨✨✨✨✨✨"<<endl;
    R1.getdata();
    R1.getmaks();
    R1.totalresult();

    return 0;
}