#include <iostream>
using namespace std;

template <class T>
T add(T x, T y)
{
    return x + y;
}
template <>
char add(char x, char y)
{
    cout << x << " and " << y << " cannot be added" << endl;
}
int main()
{
    cout << add<int>(1, 3) << endl;
    cout << add<double>(1.5, 3.123) << endl;
    add<char>('a', 'b');
    return 0;
}
