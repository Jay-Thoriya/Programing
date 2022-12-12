#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
      friend complex setdatabysum(complex o1,complex o2);
    void display()
    {
        cout << "your complex number is :" << a << " + " << b << "i" << endl;
    }
};

 complex  setdatabysum(complex o1,complex o2){
       complex o3;
       o3.setdata((o1.a+o2.a),(o1.b+o2.b));
       return o3;
 }
 
int main()
{
    complex c1, c2, sum;

    c1.setdata(4, 5);
    c1.display();
    c2.setdata(6, 7);
    c2.display();
    sum=setdatabysum(c1,c2);
    sum.display();

    return 0;
}