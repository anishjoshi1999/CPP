/*Type Conversion Class type to primitive type*/
/*Type Conversion Primitive to class type*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    // Casting operator
    operator int()
    {
        return real;
    }
    void show()
    {
        cout << "(" << real << "," << imag << ")" << endl;
    }
};
int main()
{
    Complex c1(4, 5);
    c1.show();
    int x;
    // x= c1.operator int();
    x = c1;
    cout << "The value of x is " << x << endl;
    return 0;
}
/*
Class type to primitive type can be implemented with casting operator

operator type() {
    ...
    ...
    ...
    return (type-data);
}

*/
