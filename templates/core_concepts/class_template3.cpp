#include <iostream>
using namespace std;
template <class T>
class Complex
{
private:
    T real;
    T imag;

public:
    Complex(T r = 0, T i = 0)
    {
        real = r;
        imag = i;
    }
    void show()
    {
        cout << "(" << real << "," << imag << ")" << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main()
{
    Complex<int> c3;
    Complex<int> c1(4, 3);
    Complex<int> c2(6, 7);
    Complex<double> c6;
    Complex<double> c4(4.5, 3.6);
    Complex<double> c5(6.7, 7.2);
    c3 = c1 + c2;
    c6 = c4 + c5;
    c1.show();
    c2.show();
    c3.show();
    c4.show();
    c5.show();
    c6.show();
    return 0;
}