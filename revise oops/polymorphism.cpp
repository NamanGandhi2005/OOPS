#include<bits/stdc++.h>
using namespace std;


//polymorphism means many forms 


// a man is father for her daughter 
//and husband for her wife
//a son for his mother

//a brother for his cousins 


//compile time polymorphism

//method overloading 
//opearator overloading 

//method overloading is acheived by two methods

//1.no of parameters in method 
//2.type of parameter in method

class person{
    public:
    void speak(){
        cout<<"person is speaking"<<endl;
    }
    void speak(string name){
        cout<<name<<" is speaking"<<endl;
    }
    void operator+(person&temp){
        cout<<"add krdo"<<endl;
    }
};



int main(){

    person p1;
    p1.speak("naman");


    person p2;
    p1+p2;

    

    return 0;
}