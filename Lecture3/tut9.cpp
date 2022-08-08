#include<iostream>
using namespace std;
// Class Declaration
class B;
class A {
    private:
    int a;
    public:
    void set_data(int x){
        a = x;
    }
    // Declaration of friend function
    friend void fun(A,B);
};
class B {
    private:
    int b;
     public:
      void set_data(int y){
        b = y;
    }
    // Declaration of friend function
    friend void fun(A,B);
    
};
// Defining a friend function
void fun(A o1,B o2){
    cout<<"sum is "<<o1.a+o2.b<<endl;
}
int main(){
    A obj1;
    B obj2;
    obj1.set_data(5);
    obj2.set_data(6);
    fun(obj1,obj2);
    return 0;
}