#include <iostream>
using namespace std;

int main()
{

    cout << "Welcome" << endl;
    try
    {
        cout << "Before throw" << endl;
        throw 404;
        cout << "Äfter throw" << endl;
    }
    catch (int e)
    {
        cout << "Error found " << e << endl;
    }

    return 0;
}