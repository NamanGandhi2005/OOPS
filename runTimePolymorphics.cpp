#include<iostream>


using namespace std;

class Animal{
    public:
    void bark(){
        cout<<"BHOK"<<endl;
    }

};

class Cat:public Animal{
    public:
    void bark(){
        cout<<"mewo"<<endl;
    }
};

class Cow:public Animal{
    public:
    void bark(){
        cout<<"OHHA"<<endl;
    }
};

int main(){
    Animal a;
    Cat c;

    a.bark();
    c.bark();
    
    return 0;
}