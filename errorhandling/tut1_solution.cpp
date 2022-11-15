#include <iostream>
using namespace std;
int check_denominator(int d)
{
    if (d == 0)
    {
        throw "Error dividing by zero";
    }
    else
    {
        return d;
    }
}
int main()
{
    double numerator;
    double denominator;
    double result;
    cout << "Enter First Number: " << endl;
    cin >> numerator;
    cout << "Enter Second Number: " << endl;
    cin >> denominator;
    try
    {
        if (check_denominator(denominator))
        {
            result = numerator / denominator;
            cout << "The division of first number by second number is: " << result << endl;
        }
    }
    catch (const char *c)
    {
        cout << "Error Found: " << c << endl;
    }
};