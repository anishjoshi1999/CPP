// Single Inheritance
#include<iostream>
using namespace std;
class Parent {
    private:
    int a;
    public:
    int b = 20;
    void set_a(int x){
        a = x;
    }
    void show_a(){
        cout<<"A:"<<a<<endl;
    }
    protected:
    int c;
};
class Child:public Parent {
    public:
    void set_c(int x){
        c = x;
    }
    void show_c(){
        cout<<"C:"<<c<<endl;
    }
};
int main(){
    Child c1;
    c1.set_a(10);
    c1.show_a();
    cout<<"B:"<<c1.b<<endl;
    c1.set_c(30);
    c1.show_c();
    return 0;
}