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
    Complex operator-()
    {
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2;
    // c2 = c1.operator-();
    c2 = -c1;
    c1.show_data();
    c2.show_data();
    return 0;
}