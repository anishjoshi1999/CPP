#include <iostream>
using namespace std;

template <class T>
class Symbol
{
private:
    T first_number;
    T second_number;

public:
    Symbol(T x, T y)
    {
        first_number = x;
        second_number = y;
    }
    T add()
    {
        return first_number + second_number;
    }
};
// Template Specialization
template <>
class Symbol<char>
{
public:
    Symbol(char x, char y)
    {
        cout << x << " and " << y << " cannot be added!" << endl;
    }
};
// for boolean
template <>
class Symbol<bool>
{
public:
    Symbol(bool x, bool y)
    {
        cout << x << " and " << y << " cannot be added!" << endl;
    }
};

int main()
{
    Symbol<int> s1(1, 3);
    cout << s1.add() << endl;
    Symbol<double> s2(1.5, 3.15);
    cout << s2.add() << endl;
    Symbol<char> s3('a', 'b');
    Symbol<bool> s4(true, false);
    return 0;
}
