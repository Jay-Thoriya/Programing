#include <iostream>

using namespace std;

class employ
{
    int id;
    string name;
    static int counter ;
public:
    void initcounter(void);
    void getdata(void);
    void displaydata(void);
    static void getcounter (void){
        cout<<"the value of count is :"<<counter<<endl;
         counter++;
    }
};

void employ ::getdata(void)
{

    cout << "enter the " << counter << " employ id :" << endl;
    cin >> id;
    cout << "enter the " << counter << " employ name :" << endl;
    cin >> name;
   
}

void employ ::displaydata(void)
{
    cout << " the employ " << counter << "  id is  : " << id;
    cout << " and employ  name is : " << name << endl;
}

int employ :: counter=1;
int main()
{
    employ jay;
    employ kalpesh;
    employ dainik;
    
    jay.getdata();
    jay.displaydata();
    employ::getcounter();

    kalpesh.getdata();
    kalpesh.displaydata();
    employ::getcounter();

    dainik.getdata();
    dainik.displaydata();
    employ::getcounter();

    return 0;
}