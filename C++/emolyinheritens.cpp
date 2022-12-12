#include<iostream>
using namespace std;

class employ
{
   public :
   int selery ;
   
   int id;
   employ (){
       id =102;
       selery=60000;
   } 
   
};

class programers : public employ
{
 public :
 int lengvegcord =9;
 void getdata (){
     cout<<"id is :"<<id;
 }
};
int main(){
    employ meet,sujal;
    cout<<meet.id<<" ,"<<meet.selery<<endl;
        
    cout<<sujal.id<<" ,"<<sujal.selery<<endl;

        programers skill;
        cout<<skill.id<<endl;
        cout<<skill.lengvegcord<<endl;
        skill.getdata();
    return 0;
}