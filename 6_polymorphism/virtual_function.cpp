// a parent class pointer can contain the address of child class
#include<iostream>
using namespace std;
class A{
    public:
    // For late binding type virtual keyword
    virtual void f1(){
        cout<<"Hello From A"<<endl;
    }
};
class B:public A {
    public:
    // Function overriding
    void f1(){
        cout<<"Hello From B"<<endl;
    }
};

int main(){
    A *p;
    B o2;
    p = &o2;
    p->f1();
    return 0;
}
/*If you call a function from object i.e o2.f1() then we will look for o2 type*/

/*Similary you call a function from pointer i.e p->f1() then we will look for pointer type(A)*/