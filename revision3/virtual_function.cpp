#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
    virtual void speak(){
        cout<<"animal speaking"<<endl;
    }
};

class person:public animal{
    public:
    void speak(){
        cout<<"person speaking"<<endl;
    } 
};


int main(){

    animal *a1=new person;

    (*a1).speak();

    return 0;
}