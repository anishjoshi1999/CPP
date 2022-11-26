/*To read the information from a file we have to create a boject ifstream*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    char name[30];
    ifstream ifn;
    ifn.open("Student.txt");
    ifn >> n >> name;
    cout << n << " " << name << endl;
    ifn.close();
    return 0;
}