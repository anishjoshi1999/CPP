// A do nothing function is pure virtual function
#include <iostream>
using namespace std;
class Person
{
public:
    // A function which has no definition
    // For late binding add virtual keyboard
    virtual void fun() = 0;
    // calling a do nothing function is illegal
    // So a solution is donot make an object of Person class
    // a donothing function with a virtual keyword ahead of it is called pure virtual function
};
class Student : public Person
{
    // But a Child class has a potential of calling its parents method
    // It is mandatory to override a do-nothing function, i.e., fun().
    void fun()
    {
        // Add function Definition
    }
};

int main()
{
    Person p1;
    p1.fun();

    return 0;
}

/*A class containing a pure virtual function is an abstract class*/
// We cannot istaintiate abstract class