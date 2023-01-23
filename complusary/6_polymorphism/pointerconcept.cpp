// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p;
    p = &a;
    cout << "The value of p " << p << endl;
    cout << "The value of p using dereference operator " << *p << endl;

    return 0;
}