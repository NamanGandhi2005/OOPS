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

class Dog : public Animal{

};

class Saintbernard : public Dog{

};

int main(){
    Dog d;
    d.speak();

    Saintbernard S1;
    S1.speak();

}