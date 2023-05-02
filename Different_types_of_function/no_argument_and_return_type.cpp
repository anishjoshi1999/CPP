// Online C++ compiler to run C++ program online
// function without arguments and with return value.
#include <iostream>
using namespace std;
int add(){
    int x,y;
    cout<<"Enter first value"<<endl;
    cin>>x;
    cout<<"Ënter second value"<<endl;
    cin>>y;
    return (x + y);
}

int main() {
    int sum;
    sum = add();
    cout<<"The sum of two numbers is "<<sum<<endl;
    return 0;
}