#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    void show()
    {
        cout << "(" << real << "," << imag << ")" << endl;
    }
};
int main()
{
    Complex c;
    c.show();

    return 0;
}