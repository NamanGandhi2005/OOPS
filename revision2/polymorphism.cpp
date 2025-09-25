#include<bits/stdc++.h>
using namespace std;

//compile time polymorphism 
//method overloading 

class person{
    public:

    virtual void speak(){
        cout<<"person is speaking"<<endl;

    }
    

};

//operator overloading

class animal:public person{
    public:
    void speak(){
        cout<<"person name is speaking"<<endl;
    }
};

int main(){
    person *p1;
    
    p1=new animal;
    (*p1).speak();
    
    

    return 0;
}