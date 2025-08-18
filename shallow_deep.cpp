#include<iostream>
using namespace std;


class Animal{
    public:
    int* health;
    string name;

    Animal(int h,string name){
        this->name=name;
        health=new int;//shallow copy ke liye 
        *health=h;


    }
    //!Deep copy constructor 
    Animal(Animal&temp){
        health=new int;
        
        this->name=temp.name;
        *health=*(temp.health);
    }

    void print(){
        cout<<*health<<endl;
        cout<<name<<endl;

    }
};
int main(){

    Animal a1(100,"naman");

    
    a1.print();

    //default copy contructor make shallow copy 

    Animal a2(a1);
    

    *(a2.health)=200;
    a1.print();


    a2.print();


    return 0;
}