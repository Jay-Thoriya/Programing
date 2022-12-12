#include<iostream>
#include<cstring>
using namespace std;

class jay{
    protected :
    string tital;
    int retting;   
    public :
     jay(string s, int r){
         tital =s;
         retting=r;
     }
     virtual void display(){           // void diaplay(){cout<<"ohhhh"<<endl;}    <===  no virtual then call this ones 
         cout<<"ohhhh"<<endl; 
     }
};

class jayvideo:public jay{
    int videolenght ;
    public :
    jayvideo(string s,int r,int vl):jay(s,r){
        videolenght = vl;
    }
    void display(){
        cout<<" this is a amazing  video with tital :"<<tital<<endl;
        cout<<" retting :"<<retting<<" out of 5 stars"<<endl;
        cout<<" length of this video is :"<<videolenght<<endl;
    }
};

class jaytext:public jay{
    int videotext ;
    public :
    jaytext(string s,int r,int tx):jay(s,r){
        videotext = tx;
    }
    void display(){
        cout<<" this is a amazing  video with tital :"<<tital<<endl;
        cout<<" retting :"<<retting<<" out of 10 stars"<<endl;
        cout<<" text of this video is :"<<videotext<<endl;
    }
};

int main(){
    string tital ;
    int ratting,vl,tx;

    tital = " new video";
    vl=500;
    ratting=4;
    jayvideo nvideo(tital ,ratting,vl) ;
    // nvideo.display();

    tital = " new book";
    tx=900;
    ratting=5;
    cout<<endl;
    jaytext nbook(tital ,ratting,tx) ;
    // nbook.display();

     jay* king[2];
     king[0] = &nvideo;
     king[1] = &nbook;

     king[0]->display();
     cout<<endl;
     king[1]->display();
    return 0;
}