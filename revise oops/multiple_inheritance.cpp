#include<bits/stdc++.h>
using namespace std;


class animal{
    public:
    void speak(){
        cout<<"animal is speaking"<<endl;
    }

};
class person{
    public:
    void speak(){
        cout<<"person is speaking"<<endl;
    }
};

class child:public animal,public person{

};
int main(){

    //conflict im multiple inheritance

    child c1;
    c1.person::speak();
    c1.animal::speak();

    return 0;
}