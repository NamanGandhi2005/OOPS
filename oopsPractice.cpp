#include<iostream>
using namespace std;

//oops is a object orineted programming language 

//it is common practice in it industry to use oops to maintain their codebases because of the following 
//it enhances the code readability by using classes and objects 
//it secures the code from unuaothorized access by using private access modifieers
//it it end=hances code reusablitiy by using same type of object by classifying same types of data members and methods in class

//classes are schema of real world entity it contains the data members and methods of same type of entitites
//object are instance of schema it stores the actual values of data members  and we can call methods inside the object 

//empty class size is 1
class Animal{
    private:
    int age;

    public:
    string name;
    int health;

    void sound(){
        cout<<"bhow bhpow"<<endl;
        
    }

};

int main(){
    Animal a1;
    a1.health=100;//static intiazialtion
    //dynamic

    cout<<a1.health<<endl;

    //! dynamic allocation
    Animal *a2=new Animal;
    cout<<(*a2).name<<endl;//to access dynamic object declaration

    (*a2).name="naman";

    cout<<(*a2).name<<endl;

    //2nd method to access dynamic allocation

    cout<<a2->name<<endl;

    
    


    return 0;
}