// Function_outside_class
#include <iostream>
using namespace std;

// Define a class
class Sample {
    // Public elements
   public:
    int age;
    // Functions declarations
    void displayAge();
};

void Sample::displayAge(){
     cout << "Age = " << age << endl;
}
int main() {
    // Declare a class object
    Sample obj1;
    cout << "Enter your age: ";
    // stores the value of ages inside age attribute of class Sample
    cin >> obj1.age;
    // called a method of a class Sample
    obj1.displayAge();
    return 0;
}