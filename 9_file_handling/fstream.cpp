/*To perform both read and write operation on a file we have to create a object fstream*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char str[50];
    // Writing into a file
    fstream obj;
    obj.open("name1.txt", ios::out);
    cout << "Enter data" << endl;
    cin >> str;
    obj << str;
    obj.close();
    // Reading into a file
    obj.open("name1.txt", ios::in);
    // obj.getline(str, sizeof(str));
    obj >> str;
    cout << str;
    obj.close();
    return 0;
}