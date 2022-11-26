#include <iostream>
using namespace std;
template <class T>
class info
{
public:
    info(T A)
    {
        cout << "A = " << A << " size of data in bytes:" << sizeof(T) << endl;
    }
};

int main()
{

    info<char> p('x');
    info<int> q(22);
    info<float> r(2.25);
    return 0;
}