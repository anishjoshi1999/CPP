/*can you make the same name to define more than one constructor ? Explain with example*/
#include <iostream>
using namespace std;
class Compute
{
private:
    int a;

public:
    Compute()
    {
        a = 0;
    }
    Compute(int x)
    {
        // Parameterized Constructors
        a = x;
    }
    void show()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    Compute c;
    Compute c1(4);
    c.show();
    c1.show();
    return 0;
}