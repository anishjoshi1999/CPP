#include <iostream>
using namespace std;
template <class T>
class Compute
{
private:
    T first, second;

public:
    Compute(T a, T b)
    {
        first = a;
        second = b;
    }
    // Function definition or method definition
    T bigger();
};
template <class T>
T Compute<T>::bigger()
{
    return (first > second ? first : second);
}
int main()
{
    Compute<int> c(65, 105);
    cout << c.bigger() << endl;
    Compute<double> c1(65.12, 105.89);
    cout << c1.bigger() << endl;

    return 0;
}