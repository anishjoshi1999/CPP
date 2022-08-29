#include <iostream>
using namespace std;
class Base
{
private:
    int a;

public:
    int b = 10;
    void set_a(int x)
    {
        a = x;
    }
    void show_a()
    {
        cout << "A: " << a << endl;
    }

protected:
    int c;
};
class Child:public Base {
public:
void set_c(int x){
    c = x;
}
void show_c(){
    cout<<"C: "<<c<<endl;
}

};
int main(){
    Child c1;
    c1.set_a(5);
    c1.show_a();
    cout<<"B: "<<c1.b<<endl;
    c1.set_c(6);
    c1.show_c();
    return 0;
}