// Function template
// Generalized function
#include <iostream>
using namespace std;
template <class X>
X big(X a, X b)
{
    return a > b ? a : b;
}

int main()
{
    cout << big(5, 4) << endl;
    cout << big(5.5, 4.6) << endl;

    return 0;
}