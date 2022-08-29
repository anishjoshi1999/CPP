#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollno;

public:
    void set_data(string n, int r)
    {
        name = n;
        rollno = r;
    }
    void show_data()
    {
        cout << "Name: " << name << endl;
        cout << "Rollno: " << rollno << endl;
    }
};
int main()
{
    Student s1;
    s1.set_data("Anish", 5);
    s1.show_data();
    return 0;
}