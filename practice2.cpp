#include<bits/stdc++.h>

using namespace std;

class Animal{
    public:
    int *age;

    string name;
    Animal(){
        cout<<"default constrictpr called"<<endl;
    }
    Animal(int a,string name){
        age=new int;

        (*age)=a;
        this->name=name;
        cout<<"parametrised constructor called"<<endl;
        
    }

    Animal(Animal&temp){
        age=new int;

        (*age)=*(temp.age);
        this->name=temp.name;
        cout<<"deep constrictor called"<<endl;

    }
    // Animal(Animal&temp){
    //     this->age=temp.age;
    //     this->name=temp.name;
    // }
    void print(){
        cout<<(*age)<<endl;
        cout<<this->name<<endl;
        
        cout<<" "<<endl;
    }
};



int main(){ 
    Animal a1;
    *(a1.age)=20;
    a1.name="naman";
    a1.print();
    Animal a2(a1);
    a2.print();
    *(a2.age)=50;
    a1.print();
    a2.print();

    
    //it creates deep copy when data members are static

    //it creates shallow copt when the data members are dynamic

    

    
    return 0;
}