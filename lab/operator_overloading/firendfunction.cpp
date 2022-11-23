#include <iostream>
using namespace std;
class Compute
{
private:
    int x, y;

public:
    void set_data(int a, int b)
    {
        x = a;
        y = b;
    }
    void show();
    friend void add(Compute);
};
void add(Compute c)
{
    cout << "The sum is " << c.x + c.y << endl;
}
void Compute::show()
{
    cout << "Value of x is " << x << endl;
    cout << "Value of y is " << y << endl;
}
int main()
{
    Compute c;
    c.set_data(3, 2);
    c.show();
    add(c);
    return 0;
}