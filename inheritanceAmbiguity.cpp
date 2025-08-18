#include<iostream>
using namespace std;

class Dog{
    public:
    string name;
    int age;

    void bark(){
        cout<<"bhow bhow"<<endl;
    }
    
};



class Saint{
    public:
    
    void bark(){
        cout<<"meow meow"<<endl;
    }
};

class Animal:public Dog,public Saint{
    
};

int main(){ 
    Animal a1;
    // a1.bark();

    //resolution operator

    a1.Dog::bark();
    a1.Saint::bark();

    

    return 0;
}