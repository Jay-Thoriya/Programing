#include<iostream>
using namespace std;

class student{
  protected :
  int roll_number ;

  public :
  void set_roll_number (int);
  void get_roll_number ();
};

void student :: set_roll_number(int r){
    roll_number=r;
}

void student :: get_roll_number(){
    cout<<" your roll number is : "<<roll_number<<endl;
}

class exam : public student {
   protected:
   int maths ;
   int physics ;
   public :
   void set_marks(int ,int);
   void get_marks();
};

void exam :: set_marks(int m ,int p){
    maths = m;
    physics= p;
}
void exam :: get_marks(){
    cout<<" your maths marks is :"<<maths<<endl;
    cout<<" your phsics marks is :"<<physics<<endl;
}
class event : student{
    int run ;
    int gol ;
    public :
    void set_eventstudent(int , int);
    void get_eventstudent();
};
void event ::set_eventstudent(int ru , int go){
    run = ru;
    gol=go;
}
    void event :: get_eventstudent(){
        cout<<" run event member is  :"<<run<<endl;
        cout<<" gol event member is  :"<<gol<<endl;
    }
class result : public exam , public event{
   public :
   void presented();
};
void result :: presented(){
    // int RRR = maths + physics;
    cout<<" your result is : 128"<<endl;
}
int main(){
   student s1;
   s1.set_roll_number(84);
   s1.get_roll_number();
   exam e1;
   e1.set_marks(94,83);
   e1.get_roll_number();
   result r1;
   r1.presented();
   r1.set_eventstudent(5,7);
   r1.get_eventstudent();
    return 0;
}