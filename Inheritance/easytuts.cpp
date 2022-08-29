#include<iostream>
using namespace std;
class A {
    private:
    int a;
    public:
    void set_a(int x){
        a = x;
    }
    int get_a(){
        return a;
    }
};
class B:public A {
    private:
    int b,sum;
    public:
    void getval_b(int y){
        b = y;
    }
    void add() {
        sum = b + get_a();
    }
    void show_sum(){
        cout<<"The value of sum is: "<<sum;
    }
};
int main(){
    B b1;
    b1.set_a(5);
    b1.getval_b(6);
    b1.add();
    b1.show_sum();
    return 0;
}