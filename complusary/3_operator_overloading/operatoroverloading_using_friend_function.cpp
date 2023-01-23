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
    void show_data()
    {
        cout << "(" << real << "," << imag << ")" << endl;
    }
    friend Complex operator+(Complex c1, Complex c2);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main()
{
    Complex c1(1, 2);
    Complex c2(2, 3);
    Complex c3;
    c1.show_data();
    c2.show_data();
    // c3 = operator+(c1, c2);
    c3 = c1 + c2;
    c3.show_data();

    return 0;
}