#include<iostream>

using namespace std;


class A{
    public:
    void speak(){
        cout<<"helloA"<<endl;
    }
};
class B{
    public:
    void speak(){
        cout<<"helloB"<<endl;
    }
};


class C:public A,public B{

};
int main(){
    C c1;
    // c1.speak();//ambigous

    c1.A::speak();
}