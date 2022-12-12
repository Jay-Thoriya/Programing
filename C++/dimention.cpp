#include<iostream>
#include<math.h>
using namespace std;

class point{
   int a,b;
   public :
   friend void difference(point,point);
    point(int x,int y){
        a=x;
        b=y;
    }
   void display(){
       cout<<"the dimention is X and Y : ("<<a<<", "<<b<<")"<<endl;
   }
};

void difference (point o1,point o2)
{
   int x_diff = o2.a - o1.a;
   int y_diff = o2.b - o2.b;
   double dist = sqrt((x_diff)*(x_diff)+(y_diff)*(y_diff));
   cout<<" distance is :"<<dist<<"  units";
} 

int main(){
    point c1(30,50);
    c1.display();
    point : point c2(90,35);
    c2.display();
    cout<<endl<<endl;
    difference(c1,c2);

    return 0;
}