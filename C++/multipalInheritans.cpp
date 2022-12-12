#include<iostream>
using namespace std;

class programer {
  string name ;
  public :

  void setname(string Pname);
  void getname();
};
  void programer ::setname(string Pname){
      name = Pname ;
  }
  void programer ::getname(){
      cout<<" you enter progrmer name is  : "<<name<<endl;
  }

class employ : public programer
{
   int id ;
   public :
   
   void setid(int Eid);
   void getid();
};
  void employ ::setid(int Eid){
    id = Eid ;
}
  void employ ::getid(){
    cout<<" you enetr employ id is : "<<id<<endl;
}

class engineer : public programer
{
  int selery ;
  public :

  void setselery(int Eselery);
  void getselery();
};
  void engineer ::setselery(int Eselery){
      selery = Eselery;
  }
  void engineer ::getselery(){
    cout<<" you enetr engineer selery is : "<<selery<<endl;
  }
int main(){
  int Eselery , Eid ;
  string Pname ;
    employ E1;
    engineer En1;
    cout<<" Enter a programer name  : ";
    cin>>Pname;
    E1.setname(Pname);
    cout<<" Enter a employ id  : ";
    cin>>Eid;
    E1.setid(Eid);
    cout<<" Enter a enginner selery  : ";
    cin>>Eselery;
    En1.setselery(Eselery);
    cout<<" Enter a employ class to programer name  : ";
    cin>>Pname;
    En1.setname(Pname);
    E1.getname();
    E1.getid();
    En1.getname();
    En1.getselery();
    return 0;
}