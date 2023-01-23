#include <iostream>
using namespace std;
class Item
{
private:
    int m, n;

public:
    void setM(int x)
    {
        m = x;
    }
    void setN(int y)
    {
        n = y;
    }
    void showdata()
    {
        cout << "m = " << m << " n = " << n;
    }
};
class Product
{
private:
    int a, b;

public:
    Product(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }
    operator Item()
    {
        Item temp;
        temp.setM(a);
        temp.setN(b);
        return temp;
    }
};
int main()
{
    Item i1;
    Product p1(20, 25);
    // i1 = p1.operator Item();
    i1 = p1;
    i1.showdata();
}