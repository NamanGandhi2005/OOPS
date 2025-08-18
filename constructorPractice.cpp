#include<iostream>

using namespace std;


class Animal{
    private:
    int age;
    public:
    int health;
    string name;
    static int sound;


    Animal(){
        cout<<"default contructor"<<endl;
    }

    Animal(int age,int health,string name){
        this->age=age;
        this->health=health;
        this->name=name;
        cout<<"custom constructor called"<<endl;

    }


    Animal(Animal&temp){
        this->age=temp.age;
        this->name=temp.name;
        this->health=temp.health;
        cout<<"copy constructor called"<<endl;
    }

    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age=age;
    }
    void print(){
        cout<<this->age<<endl;
        cout<<this->name<<endl;
        cout<<this->health<<endl;
        
    }

    ~Animal(){
        cout<<"default destructor"<<endl;
    }


    static int random(){
        cout<<sound<<endl;
    }



    

}; 

int Animal::sound=10;

int main(){
    Animal a1(100,200,"naman");
    // a1.setAge(13);
    // a1.name="namna";
    // a1.health=100;
    a1.print();
    //constructor

    //by using static data members it creates  thje deeps copy of object


    Animal a2(a1);
    a2.print();

    Animal *a3=new Animal;
    delete a3;

    cout<<Animal::sound<<endl;
    //dynamic allocated object does not call default 
    cout<<Animal::random()<<endl;


    return 0;
}
