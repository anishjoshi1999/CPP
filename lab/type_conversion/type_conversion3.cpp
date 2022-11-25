// Type Conversion one class type to another class type
#include <iostream>
using namespace std;
class Product
{
private:
    int m, n;

public:
    Product(int x = 0, int y = 0)
    {
        m = x;
        n = y;
    }
    int getM()
    {
        return m;
    }
    int getN()
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
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
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
/*
Type Conversion one class type to another class type
Conversion through constructor
Conversion through casting operators*/