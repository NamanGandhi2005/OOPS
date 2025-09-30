#include<bits/stdc++.h>
using namespace std;

class parent{
    public:
    void speak(){
        cout<<"parent is speaking"<<endl;
    }


};

class child:public parent{
    public:
    void speak(){
        cout<<"child is speaking"<<endl;
    }

};


int main(){


    // p1.speak();
    // c1.speak();


    parent *p1;
    child c1;
    p1=&c1;

    (*p1).speak();

    





    return 0;
}