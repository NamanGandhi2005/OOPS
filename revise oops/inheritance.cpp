#include<bits/stdc++.h>

using namespace std;


class person{
    protected:
    int age;

    public:
    string name;
    int health;
    person(){

    }
    person(int age,string name,int health){
        this->age=age;
        this->name=name;
        this->health=health;

    }
    void print(){
        cout<<this->age<<endl;
        cout<<this->name<<endl;
        cout<<this->health<<endl;


    }
    void speak(){
        cout<<this->name<<" is speaking"<<endl;
    }
};
class Banda:public person{
    public:
    Banda(){
        
        cout<<"default constructor"<<endl;
    }
    void bark(){
        cout<<age<<endl;
    }

};


int main(){

    // person p1(20,"naman",100);

    // p1.print();

    // p1.speak();
    
    // Banda b1;
    // b1.name="tanya";
    // b1.age=010;
    // b1.bark();



    

    return 0;
}