#include <iostream>
#include <string>
using namespace std;
using std :: string;

class binarry
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void sawp(void);
    void display(void);
};
void binarry ::read(void)
{
    cout << "enter a binarry number :" << endl;
    cin >> s;
}
void binarry ::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!="0" && s.at(i)!= "1")
        {
            cout << " enter a number is not binarry :" << endl;
            exit(0);
        }
    }
}

void binarry ::sawp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)== "1")
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = "1";
        }
    }
}

void binarry ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binarry b;
    b.read();
    b.chk_bin();
    b.sawp();
    b.display();

    return 0;
}