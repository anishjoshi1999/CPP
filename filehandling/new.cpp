#include <iostream>
using namespace std;
double check_b(double value)
{
    if (value == 0)
    {
        throw "The value of denominator is zero";
    }
    else
    {
        return value;
    }
}
int main()
{
    double a, b, result;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    try
    {
        b = check_b(b);
        result = a / b;
        cout << "The result is: " << result << endl;
    }
    catch (char const *e)
    {
        cout << e << endl;
    }

    return 0;
}