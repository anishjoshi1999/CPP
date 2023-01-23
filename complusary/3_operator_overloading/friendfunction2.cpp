#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    void set_a(int x)
    {
        a = x;
    }
    void show_a()
    {
        cout << "The value of a is: " << a << endl;
    }
    friend void add(A, B);
};
class B
{
private:
    int b;

public:
    void set_b(int y)
    {
        b = y;
    }
    void show_b()
    {
        cout << "The vlaue of b is: " << b << endl;
    }
    friend void add(A, B);
};
void add(A o1, B o2)
{
    cout << "The sum of two objects are " << o1.a + o2.b << endl;
}

int main()
{
    A a1;
    B b1;
    a1.set_a(4);
    b1.set_b(5);
    a1.show_a();
    b1.show_b();
    add(a1, b1);
    return 0;
}