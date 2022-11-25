#include <iostream>
using namespace std;
class Item
{
private:
    int a, b;

public:
    Item(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }
};
class Product
{
private:
    int p, q;

public:
    Product(int x = 0, int y = 0)
    {
        p = x;
        q = y;
    }
    opeartor Item()
    {
        Item temp;
        temp.a = p;
        temp.b = q;
        return temp;
    }
    void show()
    {
        cout << "The value of p is " << p << endl;
        cout << "The value of q is " << q << endl;
    }
};

int main()
{
    Item i(3, 4);
    Product p;
    // p = i.operator int()
    p = i;
    p.show();

    return 0;
}