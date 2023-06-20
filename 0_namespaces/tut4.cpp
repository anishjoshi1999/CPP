// Creating namespaces
#include <iostream>
using namespace std;
namespace namespace1
{

    int value()
    {
        return 15;
    }
}
namespace namespace2
{
    const double x = 100;
    double value()
    {
        return 2 * x;
    }
}

int main()
{
    // Access value function within namespace1
    cout << namespace1::value() <<endl;

    // Access value function within namespace2
    cout << namespace2::value() <<endl;

    // Access variable x directly
    cout << namespace2::x <<endl;

    return 0;
}