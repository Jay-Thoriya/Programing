#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T>  &v){
    cout<<"displayint this vector"<<endl;
      for (int i = 0; i < v.size(); i++)
      {
          cout<<v[i]<<"  ";
        //   cout<<v.at(i)<<"    ";
      }
      cout<<endl;
      
}

int main(){
    vector<int> vec1;
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vec2.push_back('4');
    vector<int> v(6,3);
    display(v);

    int size;
    int element ;
    // cout<<" enter your array size : "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<" enter your element of array :";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // //  vec1.pop_back();
    //  display(vec1);
    // //  vector<int> :: iterator iter = vec1.begin();
    // //  vec1.insert(iter+3,5,56);
    
    
    return 0;
}
