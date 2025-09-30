#include<bits/stdc++.h>

using namespace std;


class person{

    public:
    void print(){
        cout<<"person"<<endl;
    }
};

class animal{
    public:
    void print(){
        cout<<"animal"<<endl;
    }
    
};

class dog:public animal,public person{
    public:

    
};
int main(){
    dog d1;
    d1.animal::print();


    return 0;
}