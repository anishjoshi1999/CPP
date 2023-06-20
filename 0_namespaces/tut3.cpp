#include <iostream>
using namespace std;
namespace namespace1
{
   void func()
   {
      cout << "Hello from namespace1" << endl;
   }
}
namespace namespace2
{
   void func()
   {
      cout << "Hello from namespace2" << endl;
   }
}
using namespace namespace1;
int main ()
{
   func();
   return 0;
}