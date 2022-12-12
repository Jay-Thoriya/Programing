#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
int a[]={54,5,69,8,84};
// sort(a, a+5);
sort(a, a+5,greater<int>());

for (int i = 0; i < 5; i++)
{
    cout<<a[i]<<" ";
}

    
    return 0;
}