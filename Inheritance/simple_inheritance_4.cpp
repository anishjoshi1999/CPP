#include<iostream>
using namespace std;
class Base {
    private:
    int x = 10;
    public:
    int y = 20;
    protected:
    int z = 30;
};
int main(){
    Base b1;
    cout<<b1.y<<endl;
    return 0;
}