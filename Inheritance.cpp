#include<iostream>
using namespace std;


class Human{
    protected:
    int height;
    public:
    int age;
    int weight;
    private:
    int expect;
    public:
    int getAge(){
        return age;
    }
    void setWeight(int w){
        weight=w;

    }

};

class Male:private Human{
    public:
    string color;

    void sleep(){
        cout<<"malesleeping"<<endl;
    }
};

int main(){
    // Human h1;

    //protected subclasss ke andar access kr skte h similar to private but private cannot be accesbbile inside sub class 


    Male m1;

    cout<<m1.height<<endl;

    // Male m1;
    // m1.setWeight(34);
    // cout<<m1.weight<<endl;
    // m1.age=234;
    // cout<<m1.age<<endl;

    
}