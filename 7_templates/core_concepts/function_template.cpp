#include <iostream>
using namespace std;
template <class T>
T add(T x, T y)
{
    return x + y;
}
int main()
{
    int a = 2;
    int b = 5;
    int c;
    c = add(a, b);
    cout << c << endl;
    return 0;
}