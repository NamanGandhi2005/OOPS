#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    int level;

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
    Hero h1;//static declaration

    Hero * hero1=new Hero;//dynamic allocation in heap
    //1st way 
    (*hero1).setHealth(100);
    (*hero1).setLevel(1);
    cout<<(*hero1).getHealth()<<endl;
    cout<<(*hero1).getLevel()<<endl;


    //2nd way 
    hero1->setHealth(100);
    hero1->setLevel(1);
    cout<<hero1->getHealth()<<endl;
    cout<<hero1->getLevel()<<endl;


}           