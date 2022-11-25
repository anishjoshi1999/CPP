class Product
{
private:
    int p, q;

public:
    Product()
    {
    }
    Product(Item i)
    {
        p = i.getA();
        q = i.getB();
    }
    void show()
    {
        cout << "The value of p is " << endl;
        cout << "The value of q is " << endl;
    }
};