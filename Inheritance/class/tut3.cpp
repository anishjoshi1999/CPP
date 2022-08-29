#include<iostream>
using namespace std;
class Base {
    private:
    int temp = 10;
    public:
    int temp1 = 20;
    protected:
    int temp2 = 30;
};
class Child:public Base {
    
};
int main(){
    Child c1;
    return 0;
}