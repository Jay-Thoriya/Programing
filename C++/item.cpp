#include <iostream>
using namespace std;

class item
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcount(void) { counter = 1; }
    void setprice(void);
    void setdisplay(void);
};

void item ::setprice(void)
{
   
    cout << "enter the your "<<counter<<" item id :" << endl;
    cin >> itemid[counter];
    cout << "enter the your "<<counter<<" item price :" << endl;
    cin >> itemprice[counter];
    counter++;

}

void item :: setdisplay(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    
}
int main()
{
    item dukan;
    dukan.initcount();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.setdisplay();

    return 0;
}