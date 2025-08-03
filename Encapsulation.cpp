#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        int age;
        string name;
        int height;
    public:
    
        int getheight(){
            return height;
        } 
};

int main(){
    Student s1;
    cout<<s1.getheight()<<endl;
}