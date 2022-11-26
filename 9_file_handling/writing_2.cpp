/*To write something into a file we have to create an object ofstream*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int rollno;
    char name[30];
    ofstream ofn;
    ofn.open("Student.txt");
    cout << "Enter your roll number" << endl;
    cin >> rollno;
    cout << "Enter Name" << endl;
    cin >> name;
    ofn << rollno << " " << name;
    ofn.close();

    return 0;
}