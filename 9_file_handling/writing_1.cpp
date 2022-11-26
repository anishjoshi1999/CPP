#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // write into the file
    ofstream fout;
    fout.open("anish.txt");
    getch();
    fout << "hello";
    getch();
    fout.close();
    return 0;
}
