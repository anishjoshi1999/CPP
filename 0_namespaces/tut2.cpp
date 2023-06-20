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
 
int main ()
{
   namespace1::func();
   namespace2::func();
   return 0;
}