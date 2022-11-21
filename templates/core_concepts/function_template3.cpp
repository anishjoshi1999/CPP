// With multiple parameters
#include <iostream>
using namespace std;
template <class FIRST, class SECOND>
FIRST smaller(FIRST a, SECOND b)
{
    return (a < b ? a : b);
}
int main()
{
    int a = 5;
    double b = 3.14;
    cout << smaller(a, b) << endl;

    return 0;
}