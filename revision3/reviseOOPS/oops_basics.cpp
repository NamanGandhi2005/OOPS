#include<bits/stdc++.h>

using namespace std;

//oops is an object oriented programming paradigm where we classify our real world entity as objects which is an instance of  particlular class 
//object are real world entities whereas classes are blueprint of a real world entity for ex person is a class and it has various properties 

//like age health name are data members of a class
// and properties like setage gete age are data methods of a class

// why we use oops 
//it increases code readiblity
//code resuablity
//code maintanibilioty
//by deviding code into specific classes we can manage expand the code effortlessly


//we can encapsulate the data members and data methods into single class thus hiding the data members and methods which we do not want to show to the user

//we can use inheritance to reuse the data members and methods of superclass to subclass

//by the use of polymorphism we can use properties like method overloading by changing parameter and number of parameter 
//operator overloading to overload the operator
//method overriding is used to desgin virtual class which we can use in real time to define its own definition 


class person{
    private:
    int age;

    public:
    int health;

    string name;



    
};


int main(){

    //size of emepty class is 1;

    //by default the data members and methods are private

    person p1;
    p1.age=10;
    p1.health=100;
    p1.name="naman";

    cout<<p1.name<<endl;
    

    return 0;
}