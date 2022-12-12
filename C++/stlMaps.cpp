#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<string, int> marksmap;
    marksmap["jay"]=89;
    marksmap["raj"]=94;
    marksmap["kalpesh"]=99;

    marksmap.insert({{"monl",100},{"tanishq",90}});

    map<string, int> ::iterator iter;
    for (iter=marksmap.begin(); iter!= marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
    cout<<"the size of marksap is :"<<marksmap.size()<<endl;
    cout<<"the max  size of marksap is :"<<marksmap.max_size()<<endl;
    cout<<"the empty of marksap is :"<<marksmap.empty();
    return 0;
}