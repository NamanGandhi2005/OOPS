#include<bits/stdc++.h>
using namespace std;

class animal{
    
    virtual void draw()=0;
};

class person:public animal{
    public:
    void draw(){
        cout<<"person drawing"<<endl;
    }
};

class dog:public animal{
    public:
    void draw(){
        cout<<"dog drwaing"<<endl;
    }
};


int main(){

   dog d1;
   d1.draw();

    return 0;
}