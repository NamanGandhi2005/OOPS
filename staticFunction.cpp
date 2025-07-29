#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    int level;
    char*name;
    static int timeToComplete;
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

    static int random(){
        // cout<<health<<endl; na health access krpayega na level 
        return timeToComplete;
    }

};    
int Hero::timeToComplete=5;
int main(){
    //static fucntion prop
    //1.object create krne ki need nhi h
    //2.this keyword not available 
    //3. static function sirf static member ko hi access kr skte h

    cout<<Hero::random()<<endl;
    
    
     




}           