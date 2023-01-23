#include<iostream>
using namespace std;
class Base {
    public:
    void speak(){
        cout<<"Hello from base"<<endl;
    }
};
class Child:public Base{
    public:
    void speak(){
        cout<<"Hello from child"<<endl;
    }
};
int main(){
    Child c1;
    c1.speak();
    return 0;
}