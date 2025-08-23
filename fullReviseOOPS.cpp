#include<bits/stdc++.h>
using namespace std;

//oops 
//object ornited programming language 
//in real it industry we use oops for maintaing the code databases 
//1.it increases code readability
//2.it provides code reusability 
//3.we can adjust the security mesaure acc 
//4.custome object we can create of our own choice

//5. hides the unwanted data from user that is usually called abstraction


//object is instance of class
//class is blueporint of real world entity 

//we can create as many as objects of same class with diff methods and data members values 
//size of empty class is 1 
//otherwise its size of the data type inside it 

//access modifiers
//1.public inside and outside the class full access 
//2.private by default the class is private only accessible inside the class using getter and setter 
//3.protected inside the class access but when we inherit the class it will get inherit to child class unlike private modifier

class Animal{
    private:
    int health;
    public:
    int *age;
    string name;
    static int background;

    Animal(){
        cout<<"default constructor called"<<endl;
    }

    //parametrised constructor
    Animal(int health,int a,string name){
        this->health=health;

        age =new int;
        (*age)=a;
        this->name=name;
        cout<<"parametrised constructor called"<<endl;
    }

    Animal(Animal&temp){
        //deep copy constructor
        this->health=temp.health;

        this->name=temp.name;

        age=new int;

        (*age)=*(temp.age);
        cout<<"deep constructor called"<<endl;



    }
    void setHealth(int health){
        this->health=health;

    }
    int getHealth(){
        return this->health;
    }
    void print(){
        cout<<(*age)<<endl;
        cout<<this->name<<endl;
        cout<<this->health<<endl;
        cout<<" "<<endl;
    }

    static int random(){
        return background;
    }

    ~Animal(){
        cout<<"destructor called"<<endl;
    }
};

int Animal::background=10;



int main(){

    // Animal a1;
    // a1.age=100;
    // a1.health=1000; cant access like that 
    //we need getter and settter fucntion to access private data members

    // a1.setHealth(1000);


    // a1.name="naman";
    // a1.print();


    //static and dynamic allocation of class

    //static 
    // Animal a2;

    //dynamic
//     Animal*a2=new Animal;
//    (*a2).age=100;
//    (*a2).name="tanya";
//    (*a2).print();

    // a2->print();//2nd method to access dynamic object creation 

   //default constgructyor 
    // Animal a3;
    //parametrised contrictor called
    // Animal *a3=new Animal(100,200,"naman");
    // (*a3).print();

    //copy contructor creates shallow copy 

    //it means when data members are dynamic then it stores the pointer of the org class to copy class then if we change the value of ptr of copy class then it also reflects into the org class 

    Animal a1(500,1000,"naman");
    Animal a2(a1);

    // a1.print();
    // a2.print();
    
    
    // (*a2.age)=50;//it changes the age value in both a1 and a2


    
    // a1.print();
    // a2.print();
    
    // cout<<a1.background<<endl;
    // cout<<a1.random()<<endl;
    


    return 0;


}