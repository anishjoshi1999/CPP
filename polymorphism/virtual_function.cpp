#include<iostream>
using namespace std;
class A{
    public:
    // For late binding
    virtual void f1(){
        cout<<"Hello From A"<<endl;
    }
};
class B:public A {
    public:
    void f1(){
        cout<<"Hello From B"<<endl;
    }
};
class C:public B {
    public:
    void f1(){
        cout<<"Hello From C"<<endl;
    }
};
int main(){
    B *p;
    C o3;
    p = &o3;
    p->f1();
    return 0;
}