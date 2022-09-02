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
      cout<<"The value of A:"<<a<<endl;
  }
  protected:
  int b;
};
class B:public A {
  public:
  void set_b(int y){
      b = y;
  }
  void show_b(){
      cout<<"The value of B:"<<b<<endl;
  }
};
class C:public B{
    
};
int main(){
    C c1;
    c1.set_a(10);
    c1.set_b(20);
    c1.show_a();
    c1.show_b();
    return 0;
}