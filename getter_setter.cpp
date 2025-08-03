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
    Hero h1;
    // h1.health=78;cant update like this
    cout<<h1.health;
    h1.setHealth(70);
    h1.setLevel(100);

    cout<<h1.getHealth()<<endl;
    cout<<h1.getLevel()<<endl;


}           