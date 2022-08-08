// Online C++ compiler to run C++ program online
// function with arguments and with return value.
#include <iostream>
using namespace std;
int add(int x,int y){
    return x + y;
}

int main() {
    int a =10;
    int b = 20;
    int sum;
    sum = add(a,b);
    cout<<sum<<endl;
    return 0;
}