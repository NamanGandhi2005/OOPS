#include<bits/stdc++.h>
using namespace std;

class Hero{
    private://public prop class ke bahar bhi access ho skti h
    int value;
    public:
    
    int health;
    
    string name;//private vali chij sir class ke andar hi access hogi
    void print(){
        cout<<name<<endl;
    }

};    
int main(){
    Hero h1;
    cout<<sizeof(h1)<<endl;
    Hero ramesh;
    cout<<ramesh.health<<endl;//by default private access

}           