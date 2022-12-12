#include <iostream>
using namespace std;

class bankDiposit
{
    int principal, years;
    double interestrate, returnvalue;

public:
    bankDiposit(int p, int y, double r);
    bankDiposit(int p, int y, int r);
    void show();
    
};

bankDiposit ::bankDiposit(int p, int y, double r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (r + 1);
    }
}

bankDiposit ::bankDiposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void bankDiposit :: show()
    {
        cout << "your money is :" << principal
             << " and years :" << years
             << " your returnvalue is :" << returnvalue << endl;
    }

int main()
{
    
   /*int p, y, r;
   cout<<" enter the your money :";
   cin>>p;
   cout<<" enter the your years :";
   cin>>y;
   cout<<" enter the your interestrate :";  
   cin>>r;
     */     
    bankDiposit b1(20,2,0.04);
     b1.show();
    return 0;
}