#include<bits/stdc++.h>
using namespace std;


class Person{

    private:

    int health;

    public:
    string name;

    int *age;

    static int random;



    Person(){
        cout<<"default constructor called"<<endl;

    }
    Person(int health,string name,int a){
        this->health=health;
        this->name=name;
        age=new int;
        (*age)=a;

        cout<<"parametrised constructor called"<<endl;

    }

    Person(Person&temp){
        //copy constructor that is by dedault shadow copy 
        //deep copy constructor 

        this->health=temp.health;
        this->name=temp.name;
        age=new int;

        *(age)=*(temp.age);


        cout<<"copy constructor called"<<endl;

    }



    void print(){
        cout<<this->health<<endl;
        cout<<this->name<<endl;
        cout<<(*age)<<endl;

    }
    ~Person(){
        cout<<"destructor called"<<endl;
    }

    static void ran(){
        cout<<random<<endl;
    }


};

int Person::random=10;

int main(){
    //default constructor 

    // Person p1;
    //parametrised constructor

    Person p2(100,"naman",20);
    p2.print();


    //copy constructor
    cout<<endl;
    Person p3(p2);
    p3.print();



    *(p3).age=50;
    p2.print();
    cout<<endl;
    p3.print();


    //assignment copy operator

    // Person p4;

    // p4=p3;

    // p4.print();

    //shallow copy and deep copy demonstration

    //it does shallow copy of only dynamic data members because it copies the entire address of original class to copied class as it 


    //destructor

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<Person::random<<endl;
    cout<<p2.random<<endl;

    p2.ran();
    

    //static values are only accesded by static functions 

    d



    return 0;

}