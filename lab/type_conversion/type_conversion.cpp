/*Type Conversion Primitive to class type*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        // Default Constructor
    }
    Complex(int k)
    {
        real = k;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void setData(int r, int i)
    {
        real = r;
        imag = i;
    }
    void show()
    {
        cout << "(" << real << "," << imag << ")" << endl;
    }
};
int main()
{
    Complex c1;
    Complex c2(4, 5);
    int x = 10;
    /*Constructors are also called when you assign other datatypes.*/
    c1 = x;
    c1.show();
    c2.show();
    return 0;
}