#include<iostream>

using namespace std;

class Person{
    
    private:
    int phone;
    public:

    string name;
    int age;

    void speak(){
        cout<<"hello tora"<<endl;
    }

    

};
//single inheritance
class naman:public Person{
    public:

    void bark(){
        cout<<"bhow bhwo"<<endl;
    }
};

//multi level inheritance







//multiple inheritacnce


class multi:public Person,public naman{

};

int main(){
    Person p1;
    naman n1;

    n1.speak();

    

    multi m1;
    naman::m1.bark();



}