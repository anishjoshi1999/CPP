/*To perform both read and write operation on a file we have to create a object fstream*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char str[50];
    fstream obj;
    obj.open("name.txt", ios::in);
    obj >> str;
    cout << str;
    obj.close();
    return 0;
}