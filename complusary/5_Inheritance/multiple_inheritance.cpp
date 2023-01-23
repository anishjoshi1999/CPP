// Multiple Inheritance
#include<iostream>
using namespace std;
class A {
    private:
    int a;
    public:
    void set_a(int x){
        a = x;
    }
    void show_a(){
        cout<<"A:"<<a<<endl;
    }
};
class B {
    private:
    int b;
    public:
    void set_b(int x){
        b = x;
    }
    void show_b(){
        cout<<"B:"<<b<<endl;
    }
};
class C:public A,public B {
    private:
    int c;
    public:
    void set_c(int x){
        c = x;
    }
    void show_c(){
        cout<<"C:"<<c<<endl;
    }
};
int main(){
    C c1;
    c1.set_a(10);
    c1.set_b(20);
    c1.set_c(30);
    c1.show_a();
    c1.show_b();
    c1.show_c();
    return 0;
}