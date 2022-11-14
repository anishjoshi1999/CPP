#include <iostream>
using namespace std;
int main()
{
    cout << "Welcome" << endl;
    try
    {
        throw 10;
        cout << "Hello From try" << endl;
    }
    catch (int e)
    {
        cout << "The thrown value is"
    }
};