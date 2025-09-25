#include<bits/stdc++.h>
using namespace std;

class person{
    public:
    void speak(){
        cout<<"person is spearking"<<endl;
    }
};
class animal{
    public:
    void speak(){
        cout<<"animal is spearking"<<endl;
    }
};
class child:public person,public animal{

};



int main(){
    child c1;

    // c1.speak();

    c1.person::speak();//resolution operator for ambigous
    c1.animal::speak();//resolution operator for ambigous
    

    return 0;
}