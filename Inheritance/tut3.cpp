// Multilevel Inheritance:
#include<iostream>
using namespace std;
class A {
    protected:
    int a;
};
class B:public A {
    public:
    void set_a(int x){
        a = x;
    }
};
class C:public B {
    public:
    void show_a(){
        cout<<"A:"<<a<<endl;
    }
};
int main(){
    C c1;
    c1.set_a(10);
    c1.show_a();
    return 0;
}