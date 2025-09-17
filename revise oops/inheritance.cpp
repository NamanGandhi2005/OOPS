#include<bits/stdc++.h>

using namespace std;


class person{
    private:
    int age;

    public:
    string name;
    int health;

    person(int age,string name,int health){
        this->age=age;
        this->name=name;
        this->health=health;

    }
    void print(){
        cout<<this->age<<endl;
        cout<<this->name<<endl;
        cout<<this->health<<endl;


    }
    void speak(){
        cout<<
    }
};


int main(){

    person p1(20,"naman",100);

    p1.print();


    
    

    return 0;
}