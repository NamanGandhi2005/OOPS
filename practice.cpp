#include<iostream>
using namespace std;

class Animal{
    private:
    int health;
    
    public:
    string name;
    int age;
    static int tora;


    Animal(Animal&temp){
        this->health=temp.health;
        this->name=temp.name;
        this->age=temp.age;
        cout<<"default co[py constrictpr"<<endl;
    }

    Animal(){
        cout<<"default"<<endl;
    }
    Animal(int health,string name,int age){
        this->health=health;
        this->name=name;
        this->age=age;
    }

    void print(){
        cout<<this->health<<endl;
        cout<<this->name<<endl;
    }

    void setHealth(int health){
        this->health=health;
    }
    int getHealth(){
        return this->health;
    }

    ~Animal(){
        cout<<"defaul desturctor"<<endl;
    }



};


class Person{
    public:
    string name;
    int age;

    static int tora;


};

int Animal::tora=500;
int Person::tora=1000;


int main(){
    // Animal a1;//default constructor
    Animal a2(100,"tanya",10);//parametrised contructor
    //copy contructor
    Animal a3(a2);

    a3.print();

    a2.print();

    // a1.name="naman";
    // a1.print();

    //default copy contrcutor creates shallow copty when used raw pointer lile 
    // char*name;

    //but it will create deep copy if used int age,string name

    //destructor

    // to delete object we use destrcutor

    Animal *ok=new Animal(50,"okbro",100);

    (*ok).print();
    (*ok).setHealth(121);
    cout<<(*ok).getHealth()<<endl;

    ok->print();

    cout<<" "<<endl;

    cout<<a2.tora<<endl;//static keyword is used when we want to keep somthin static in all the classes 

    cout<<Person::tora<<endl;

}