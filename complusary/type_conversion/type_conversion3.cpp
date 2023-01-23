#include <iostream>
using namespace std;
class Product
{
private:
    int m, n;

public:
    Product()
    {
        m = 0;
        n = 0;
    }
    Product(int x, int y)
    {
        m = x;
        n = y;
    }
    getM()
    {
        return m;
    }
    getN()
    {
        return n;
    }
};
class Item
{
private:
    int a, b;

public:
    Item()
    {
        // default constructor
    }
    Item(Product p)
    {
        a = p.getM();
        b = p.getN();
    }
    void show()
    {
        cout << "The value of a " << a << endl;
        cout << "The value of b " << b << endl;
    }
};

int main()
{
    Item i1;
    Product p1(3, 4);
    i1 = p1;
    i1.show();
    return 0;
}