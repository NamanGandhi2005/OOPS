#include<bits/stdc++.h>
using namespace std;
class animal{
    public:
    int *age;
    string name;

    animal(int a,string name){
        age=new int;
        (*age)=a;


        this->name=name;

    }
    animal(animal&temp){
        age=new int;
        (*age)=*(temp.age);
        this->name=temp.name;
    }

    void print(){
        cout<<(*age)<<endl;
        cout<<this->name<<endl;

    }


};

int main(){

    animal a1(100,"naman");

    a1.print();

    animal a2(a1);
    a2.print();

    *(a2.age)=200;

    a1.print();
    a2.print();

    animal a3=a2;
    a3.print();
    *(a3.age)=300;
    a2.print();
    a3.print();

    return 0;

}