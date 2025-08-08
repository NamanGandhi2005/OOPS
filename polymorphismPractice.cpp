#include<iostream>
using namespace std;

class Animal{
    private:
    int health;
    
    public:
    string name;
    int age;

    void speak(){
        cout<<"no arguament speak"<<endl;
    }

    //function overloading compile time polymorphism

    void speak(int age){
        cout<<"hello my name is "<<this->name<<" my age is "<<age<<endl;
    }


    //operator overloading 

    void operator+(Animal&temp){
        cout<<temp.age<<endl;
        cout<<" "<<endl;
        cout<<"this is operatoir opveloading"<<endl;
    }
};

int main(){
    Animal a1;
    a1.name="naman";
    a1.age=10;


    a1.speak();

    a1.speak(15);


    Animal a2;
    a2.age=13;

    a1+a2;
    return 0;
}