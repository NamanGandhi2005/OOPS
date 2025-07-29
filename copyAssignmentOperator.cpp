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

};    
int main(){
    
    
    //Default copy constructor shallow copy krta h 

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel(1223);
    char name[9]="NAMAN";
    hero1.setName(name);
    hero1.print();

    //use deault copy constrcutor

    Hero hero2(hero1);
    hero2.print();

    hero1.name[4]='ad';

    hero1.print();//isme change kiya tha 

    hero2.print();//isme bhi change hoga kyuki shallow copy krta h
     
    hero1=hero2;//assignment operator hero2 ki value hero1 me dal rhe h


    hero1.print();
    hero2.print();

    


}           