#include<iostream>
#include<string>
using namespace std;

class student 
{
  string name;
  int rollnumer;

    public :

    void setdatainformation(){
        cout<<"enter student name : ";
        cin>>name;
        cout<<" /nenter student roll number ";
        cin>>rollnumer;
    }

    void displaydatainformation(){
        cout<<" student name is : "<<name;
        cout<<" student rollnumber is : "<<rollnumer;

    }
};

class event : public student 
{
  int quizpoint;
  int storypoiint;

    public:
    
     void setdataevnt(){
        quizpoint=9;
        storypoiint=8;
     } 
     void displayevent(){
         cout<<" quizpoint out of 10 is : "<<quizpoint<<endl;
         cout<<" storypoint out of 10 is : "<<storypoiint<<endl;
     }

    friend class result ;

};


class result : public event{
    
    int total;
   
   public :

   void displayresult(){
       total = quizpoint + storypoiint ;

       cout<<" student"
   }

};
int main(){
    
    return 0;
}