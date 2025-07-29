#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    int level;
    char*name;
    //parametrised constructor
    Hero(){
        cout<<"default constructor"<<endl;
        name=new char[100];
    }
    Hero(int health){
        cout<<this<<endl;
        this->health=health;//this is for current context
    }
    Hero(int health,int level){
        this->health=health;
        this->level=level;
    }

    // COPY CONSTRUCTOR 

    Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<this->health<<endl;
        cout<<this->level<<endl;
        cout<<this->name<<endl;
    }

    int getLevel(){
        return level;
    }
    void setLevel(int lvl){
        level=lvl;
    }
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health=h;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    //destructor
    ~Hero(){
        cout<<"detructor callled"<<endl;
    }

};    
int main(){
    //destructor memory de-allocate
    //static iske liye destructor automatically call hota h
    Hero a;
    //dynamic iske liye destructor automatically call nhi hota

    Hero*b=new Hero();

    delete b;
    return 0;
    
    
     




}           