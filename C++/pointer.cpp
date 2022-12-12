#include<iostream>
using namespace std;

class shopitem {
  int id;
  float price ;
  public :
    void setdata(int a,int b){
       id =a;
       price=b;
    }
    void getdata(){
        cout<<" your id is : "<<id<<endl;
        cout<<" your price is : "<<price<<endl;
    }
};


int main(){
    int size =4;
    int p;
    float q;
  shopitem *ptr = new shopitem[size];
  shopitem *ptrtemp =ptr;
  for (int i = 0; i < size; i++)
  {
      cout<<" Entre you id and price  for itme : "<<i+1<<endl;
      cin>>p;
      cin>>q;

      ptr->setdata(p,q);
      *ptr++;
  }
  for (int  i = 0; i < size; i++)
  {
      cout<<"item numbre : "<<i+1<<endl;
      ptrtemp->getdata();
      ptrtemp++;
  }
  
      
    return 0;
}