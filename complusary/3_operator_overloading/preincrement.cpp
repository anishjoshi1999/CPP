#include <iostream>
using namespace std;
class Integer
{
private:
    int value;

public:
    void get_data(int x)
    {
        value = x;
    }
    void show_data()
    {
        cout << "Value: " << value << endl;
    }
    Integer operator++()
    {
        Integer i;
        i.value = ++value;
        return i;
    }
};

int main()
{
    Integer i1;
    Integer i2;
    i1.get_data(4);
    i1.show_data();
    // i2 = i1.operator++();
    i2 = ++i1;
    i1.show_data();
    i2.show_data();

    return 0;
}