#include <iostream>
using namespace std;
class Animal
{
private:
    int age = 10;

public:
    void eat()
    {
        cout << "I am eating" << endl;
    }
    void sleep()
    {
        cout << "I am sleeping" << endl;
    }
    void show_age()
    {
        cout << "Age: " << age << endl;
    }
};
class Dog : private Animal
{
public:
    void bark()
    {
        cout << "Woof!!" << endl;
    }
    void show()
    {
        show_age();
        eat();
        sleep();
    }
};
int main()
{
    Dog d1;
    d1.bark();
    d1.show();
    return 0;
}