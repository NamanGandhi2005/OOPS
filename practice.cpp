#include<iostream>
 using namespace std;


class Animal{
    private:
    int health;

    public:
    string name;
    static int id;

    public:


    Animal(){
        cout<<"default dconstruct36or 1"<<endl;
    }

    Animal(int health ,string name){
        this->health=health;
        this->name=name;
        cout<<"parametrised "<<endl;
    }

    int getHealth(){
        return this->health;
    }

    void setHealth(int health){
        this->health=health;
        
    }

    void print(){
        cout<<this->name<<endl;
    }

    ~Animal(){
        cout<<"destuot callded"<<endl;
    }




    
};

Animal::id=5;

int main(){
    

    Animal a1(100,"namn");
    Animal a2(200,"tanya");
    cout<<a1.getHealth()<<endl;
    cout<<a2.getHealth()<<endl;

    a2=a1;

    cout<<a1.getHealth()<<endl;
    cout<<a2.getHealth()<<endl;


    // Animal a1(100,"namn");
    // Animal a2(a1);
    // cout<<a2.getHealth()<<endl;

    // a1.setHealth(200);

    // cout<<a1.getHealth()<<endl;
    // cout<<a2.getHealth()<<endl;

    // Animal a1;
    // a1.setHealth(100);
    // a1.name="naman";
    // cout<<a1.getHealth()<<endl;

    // a1.print();
    return 0;

}