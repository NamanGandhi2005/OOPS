#include<bits/stdc++.h>

using namespace std;

class Animal{
    public:
    int *health;
    string name;

    Animal(Animal&temp){
        health=new int;
        
        (*health)=*(temp.health);
        this->name=temp.name;
    }


    Animal(int h,string name){
        health=new int;
        (*health)=h;
        this->name=name;
    }

    Animal(){ 
        cout<<"default construcot called"<<endl;
    }

    void print(){
        cout<<(*health)<<endl;
        cout<<this->name<<endl;
    } 
    
    void speak(){
        cout<<"animal is speaking"<<endl;
    }

};

int main(){

    Animal a1(10,"naman");
    Animal a2(a1);
    // Animal *a2=new Animal(100,"tanya");
    // a1.health=10;
    // a1.name="naamn";
    a1.print();
    a2.print();
    *(a2.health)=50;
    a1.print();
    a2.print();


    // cout<<floor(10>>2)<<endl;
    




    return 0;
}