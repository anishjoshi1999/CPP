#include <iostream>
using namespace std;
class Box
{
private:
    int length, breadth, height;

public:
    void set_data(int length, int breadth, int height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }
    void show_data()
    {
        cout << "(" << length << "," << breadth << "," << height << ")" << endl;
    }
};
int main()
{
    Box b1;
    b1.set_data(1, 2, 3);
    b1.show_data();

    return 0;
}