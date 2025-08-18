#include<iostream>
using namespace std;


class Animal{
    public:
    int health;
    string name;

    void speak(){
        cout<<"bhow bhow"<<endl;


    }
    void speak(string name){
        cout<<"bhow bhow"<<name<<endl;
    }


};


int main(){
    Animal a1;

    a1.health=100;
    a1.speak("naman");

    
    return 0;

    
}