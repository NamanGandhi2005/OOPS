#include<bits/stdc++.h>

using namespace std;

class animal{
    private:
    int health;
    void healthGen(int h){
        this->health=h*100;
    }

    int returnHealth(){
        return this->health/100;
    }

    public:

    int age;
    string name;

    void setHealth(int h){
        healthGen(h);
    }
    void getHealth(){
        cout<<returnHealth()<<endl;
    }


};

int main(){

    animal a1;

    a1.setHealth(4);
    a1.getHealth();

    

    return 0;

}