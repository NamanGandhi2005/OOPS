#include<iostream>
using namespace std;

class Animal{
    public:
    int *health;
    string name;


    Animal(int h,string name){
        health=new int;

        //parametrised construtor
        (*health)=h;
        this->name=name;
    }

    //deeep copy construtor

    Animal(Animal&temp){
        this->name=temp.name;

        health=new int;
        

        (*health)=*(temp.health);
    }
    void print(){
        cout<<(*health)<<" ";
        cout<<this->name<<" ";

    }
    
};

int main(){

    Animal a1(100,"naman");
    // a1.print();

    //copy 

    Animal a2(a1);
    // a2.print();

    *a2.health=200;//it is copying the address of the a1 health to a2 health we want only absolute value to be copiedd

    cout<<endl;
    a1.print();
    cout<<endl;
    a2.print();



    return 0;
}