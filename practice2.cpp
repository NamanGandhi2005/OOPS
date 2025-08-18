#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int health;
    string name;

    virtual void speak(){
        cout<<"Animal spearking"<<endl;
    }
};

class Dog:public Animal{
    
    public:
    void speak(){
        cout<<"Dog Spearking"<<endl;
    }


};


class Cat:public Animal{
    public:
    void speak(){
        cout<<"Cat Speaking"<<endl;
    }

};



int main(){
    Animal *a1;
    Dog d1;
    a1=&d1;
    a1->speak();

    return 0;

}