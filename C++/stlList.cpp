#include<iostream>
#include<list>

using namespace std;
void display(list<int> ist){
    list<int> ::iterator it;
    for (it=ist.begin() ; it!=ist.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main(){
    list<int> list1;
    list1.push_back(2);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(7);
    list1.push_back(12);
    display(list1);
    // list1.pop_back();
    // display(list1);
    // list1.remove(1);
    // display(list1);
    list1.sort();
    display(list1);

    list<int> list2(3);
    list<int> ::iterator iter ;
    iter = list2.begin();
    *iter = 45;
    iter++;
    
    *iter = 7;
    iter++;
    
    *iter = 9;
    iter++;
    
    display(list2);
    // list2.pop_front();
    // display(list2);
    // list2.reverse();
    list2.sort();
    display(list2);

    list1.merge(list2);
    display(list1);
    list1.remove(7);
    list1.remove(9);
    display(list1);





    // list<int> ::iterator iter;
    // iter=list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter;
    // iter++;
    return 0;
}