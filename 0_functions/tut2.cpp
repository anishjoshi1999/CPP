// Online C++ compiler to run C++ program online
// function with arguments and without return value.
#include <iostream>
using namespace std;
void add(int x,int y){
    cout<<"The sum of two numbers is "<<(x+y)<<endl;
}

int main() {
    int a;
    int b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    add(a,b);
    return 0;
}