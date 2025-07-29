#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    int level;

    Hero(){
        cout<<"constructor called"<<endl;
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
    
    //default constructor with the name of class
    Hero ramesh;//now printing constructor called //default constructor create hora h


    // Hero * h=new Hero;

    //if there is custom constructor is written then default constructor is killed
    


}           