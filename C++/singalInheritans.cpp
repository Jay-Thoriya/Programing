#include<iostream>

using namespace std;

class employ {
   int id ; 
   public :

    void setID(int employid);
};

void employ :: setID(int employid){
    id = employid ;
    cout<<" employ id is "<<id<<endl;
}

class programers : public employ {
  int selery ;

  public :
    void setSELERY(int employselery);
    

};

void programers ::setSELERY(int employselery){
    selery = employselery ;
    cout<<" employ selery is "<<selery<<endl;
    
}

int main(){
    programers p1;
    p1.setID(905);
    programers p2;
    p2.setSELERY(20000);
}