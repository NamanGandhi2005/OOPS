#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    int level;
    //parametrised constructor

    Hero(int health){
        cout<<this<<endl;
        this->health=health;//this is for current context
    }
    Hero(int health,int level){
        this->health=health;
        this->level=level;
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
    
    
    // Hero ramesh(100);//parametrised constructor
    // cout<<ramesh.getHealth()<<endl;
    Hero suresh(200,300);
    
    cout<<suresh.getHealth()<<endl;



}           