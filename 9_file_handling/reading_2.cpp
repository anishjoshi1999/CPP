#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char ch;
    ifstream fin;
    fin.open("Student.txt");
    // ch = fin.get();
    fin >> ch;
    while (!fin.eof())
    {
        cout << ch;
        // ch = fin.get();
        fin >> ch;
    }
    fin.close();
    return 0;
}