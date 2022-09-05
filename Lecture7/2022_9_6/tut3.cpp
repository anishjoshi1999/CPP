#include<iostream>
using namespace std;
class base_one {
    public:
    base_one(){
        cout<<"Hello from base 1"<<endl;
    }
};
class base_two{
    public:
    base_two(){
        cout<<"Hello from base 2"<<endl;
    }
};
class derived:public base_two,public base_one{
    public:
    derived(){
        cout<<"Hello from derived"<<endl;
    }
};
int main(){
    derived d;
    
    return 0;
}