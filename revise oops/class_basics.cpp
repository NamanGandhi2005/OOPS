#include<bits/stdc++.h>

using namespace std;


//OOPS is an obejct oriented programming language 
//OOPS is used to create data memebers and functions inside a specific classes to maintain the code databses
//1.it increases the code readablity
//2.resusablity of code 
//3.It increases modularity 

//what are classes in oops 
//class is a blueprint of real world entity it basically contains the basic structure how object is defined what are its properties it holds and what functions it can perform
//object is instance of a class it contains the real data of an entity

//private by default 

//public cannpt be used in child class 
 
//protected can be inherit and used in child class but cannot access without getter and setter


class Animal{
    private:
    int age;
    public:
    string name;
    int health;


    int getAge(){
        return age;
    }

    void setAge(int age){
        this->age=age;

    }


};


int main(){

    // Animal a1;

    // a1.health=100;
    // a1.name="naman";

    // cout<<a1.health<<endl;
    //static allocation
    // Animal a2;

    //dynamic allocation
    
    // Animal*a2=new Animal;
    // (*a2).health=100;
    // (*a2).name="naman";
    // cout<<(*a2).health<<endl;
    // cout<<(*a2).name<<endl;

    // cout<<a2->name<<endl;

    //getter and setter to access the private data members and methods inside the class

    Animal a1;
    a1.setAge(100);


    cout<<a1.getAge()<<endl;

    

    

    return 0;

}