#include<iostream>
using namespace std;

class animal
{
  public :
  string name ;
  int legs;
  string sound;
};

int main(){

    animal cat;
    animal dog;
    animal cow;
    cat.name =" bili";
    cat.legs = 4;
    cat.sound ="mi aa uu";
    dog.name = "seru";
    dog.legs =4;
    dog.sound ="bha uu bha uu";
    cow.name = "gay";
    cow.legs =4;
    cow.sound="bhe bhe";
    cout<<" the cat name is :"<<cat.name<<endl;
    cout<<" the cat legs is  :"<<cat.legs<<endl;
    cout<<" the cat sound is :"<<cat.sound<<endl;
     cout<<" the dog name is :"<<dog.name<<endl;
    cout<<" the dog legs is  :"<<dog.legs<<endl;
    cout<<" the dog sound is :"<<dog.sound<<endl;
     cout<<" the cow name is :"<<cow.name<<endl;
    cout<<" the cow legs is  :"<<cow.legs<<endl;
    cout<<" the cow sound is :"<<cow.sound<<endl;
    return 0;
}