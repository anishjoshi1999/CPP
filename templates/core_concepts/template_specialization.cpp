#include <iostream>
using namespace std;

template <class T>
class Symbol
{
public:
    Symbol(T x)
    {
        cout << x << " is not a character!" << endl;
    }
};
// Template Specialization
template <>
class Symbol<char>
{
public:
    Symbol(char x)
    {
        cout << x << " is a character!" << endl;
    }
};

int main()
{
    Symbol<int> s1(1);
    Symbol<double> s2(3.145);
    Symbol<char> s3('a');
    return 0;
}
