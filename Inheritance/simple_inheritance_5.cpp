#include <iostream>
using namespace std;
class Base
{
private:
    int x = 10;

protected:
    int y = 20;

public:
    int z = 30;
};
class Child:public Base {

};
int main()
{
    Child c1;
    cout<<c1.z<<endl;
    return 0;
}