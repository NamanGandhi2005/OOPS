#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int health;
    string name;
    virtual void speak(){
        cout<<"animal is barking"<<endl;
    }

};

class Person:public Animal{
    public:
    void speak(){
        cout<<"person is talking"<<endl;

    }

    
};




//polymorphism is used to show a single method to function differnetlyt acc to class changes

//there are twow types of polymorphism 
// 1.static poly that is compile time is_polymorphic
// ->method overloading 
// ->operator overloading
// 2.dynamic poly that is run time polymorphism




int main(){
    
    // c1.speak();//this is inheritance ambiguity 
    // c1.Animal::speak();//resolution operator 
    Animal *a1;
    Person p1;

    a1=&p1;
    a1->speak();
    


    

    return 0;
}