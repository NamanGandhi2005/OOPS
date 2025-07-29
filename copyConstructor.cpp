#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    int level;
    //parametrised constructor
    Hero(){
        cout<<"default constructor"<<endl;
    }
    Hero(int health){
        cout<<this<<endl;
        this->health=health;//this is for current context
    }
    Hero(int health,int level){
        this->health=health;
        this->level=level;
    }

    //COPY CONSTRUCTOR 

    Hero(Hero &temp){
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
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

};    
int main(){
    
    
    Hero suresh;
    suresh.setHealth(100);
    suresh.setLevel(5);

    //copy constructor which is by default in class 
    Hero ritesh(suresh);//ritesh ko copy krdo suresh ka 

    cout<<ritesh.getHealth()<<endl;



}           