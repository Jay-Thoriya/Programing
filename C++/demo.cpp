#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string st= " hello friends";
    string st2;
     ofstream out("read");
     out<<st;
     out.close();
    ifstream in;
    in.open("writ");
 
    while(in.eof()==0){
        getline(in,st2);
        cout<<st2<<endl;
    }
    

    return 0;
}