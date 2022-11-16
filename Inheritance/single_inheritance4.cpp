#include<iostream>
using namespace std;
class Base {
    public:
    Base(){
        cout<<"Hello from base constructor"<<endl;
    }
    void speak(){
        cout<<"Hi From Base"<<endl;
    }
};
class Child:public Base{
    public:
    Child(){
        cout<<"Hello From child constructor"<<endl;
    }
    void speak(){
        cout<<"Hi From Child"<<endl;
    }
};
int main(){
    Child c1;
    c1.speak();
    c1.Base::speak();
    return 0;
}