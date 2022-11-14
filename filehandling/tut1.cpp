#include <iostream>
using namespace std;
int main()
{
    double numerator;
    double denominator;
    double result;
    cout << "Enter First Number: " << endl;
    cin >> numerator;
    cout << "Enter Second Number: " << endl;
    cin >> denominator;
    result = numerator / denominator;
    cout << "The division of first number by second number is: " << result << endl;
};