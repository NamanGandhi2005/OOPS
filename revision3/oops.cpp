//oops is an object oriented programming language
#include<bits/stdc++.h>
using namespace std;


class person{
    private:
    int age;
    public:
    string name;
    int *health;
    static int random;

    person(person&temp){
        
        this->age=temp.age;
        this->name=temp.name;
        health=new int;
        (*health)=*(temp.health);
        cout<<"copy constructor"<<endl;
    }
    person(){
        cout<<"default constructor"<<endl;
    }
    person(int a,string name ,int h){
        this->age=a;
        this->name=name;
        health=new int;
        (*health)=h;
        cout<<"parametrised constructor"<<endl;
    }
    void print(){
        cout<<"Age is "<<this->age<<endl;
        cout<<"name is "<<this->name<<endl;
        cout<<"health is "<<(*health)<<endl;
        cout<<"end"<<endl;
    }

    void setAge(int a){
        this->age=a;

    }
    void getAge(){
        cout<<this->age<<endl;   
    }
};

int person::random=10;



int main(){
    //static allocation 
    person *p1=new person(10,"naman",100);
    // p1.age=20;//private member cannot access
    //therefore we use getter and setter 
    // p1.setAge(20);

    // p1.name="naman";
    // p1.health=100;

    // p1.print(); 

    // cout<<sizeof(p1);

    
    //dynamic allocation

    // person *p2=new person;

    // (*p2).name="tanya";

    

    // (*p2).health=100;


    // (*p2).setAge(22);
    // (*p2).getAge();

    person p2(*p1);

    p2.print();

    *(p2.health)=200;
    (*p1).print();
    p2.print();

    
    cout<<person::random<<endl;
    


    return 0;
}