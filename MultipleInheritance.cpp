#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog{
    public:
    int id;
    int age;
    public:
    void bark(){
        cout<<"bnhow bhow"<<endl;
    }
};

class Saintbernard : public Dog,public Animal{

};

int main(){
    

    Saintbernard S1;
    S1.speak();
    S1.bark();

}