//oops is an object oriented programming 

// object is an instance of class 
// class is blueprint of all properties of real world entity

// for ex a heero has many properties name,age,action,health

//why we use oops 
//it improves the structure of code
//it improves secuirty
//data abstraction
// encapsulation
//polymorphism
//inheritance
//reusability of class 

//size of empty class is 1

#include<bits/stdc++.h>
using namespace std;

class person{
    private:
    int health;
    public:

    int *age;
    string name;
    static int random;

    person(person&temp){
        //deep copy constructor

        this->health=temp.health;
        age=new int;

        (*age)=*(temp.age);

        this->name=temp.name;
        cout<<"copy constructor called"<<endl;
    }

    //default constructor
    person(){
        cout<<"default constrcutor called"<<endl;

    }
    //parametrised constructor
    person(int health,int a,string name){
        this->health=health;
        this->name=name;
        age=new int;
        (*age)=a;
        cout<<"parametrised constructor called"<<endl;
    }
    void print(){
        cout<<this->health<<endl;
        cout<<(*age)<<endl;
        cout<<this->name<<endl;
        cout<<" "<<endl;
        cout<<random<<endl;
    }
    void setHealth(int health){
        this->health=health;

    }
    int getHealth(){
        return this->health;
    }
    ~person(){
        cout<<"destructor called"<<endl;
    }
    static void ok(){
        cout<<random<<endl;
    }

};

int person::random=10;




int main(){
    // person p1;
    // // cout<<sizeof(p1)<<endl;
    // p1.age=20;
    // p1.name="nmaman";
    // // p1.health=100;//private data members cant access likee that
    // //we need getter ands etter for them 

    // //dynamic allocation for object 

    // // person*p2=new person;
    // // (*p2).age=10;
    // // (*p2).name="tanya";

    // // (*p2).print();


    // // p1.print();

    // p1.setHealth(100);
    // cout<<p1.getHealth()<<endl;



    person*p1=new person(100,20,"naman");
    (*p1).print();
    //copy constructor
    person p2(*p1); 

    p2.print();
    // (*p1).age=new int;
    // *((*p1).age)=40;
    *(p2.age)=40;
    *(p2.age)=100;
    //default copy constructor creates a shallow copy when data members are dymanic allocated
    (*p1).print();
    p2.print();


    //destructor is called for static allocation by default

    //static keyword
    // cout<<person::random<<endl;
    // p2.ok();
    // //static keywords are only accessed by static function

    return 0;

}