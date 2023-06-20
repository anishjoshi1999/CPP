#include<iostream>
using namespace std;
class base {
    public:
    base(){
        cout<<"Hello from default constructor"<<endl;
    }
    base(int data){
        cout<<"Hello(base) "<<data<<endl;
    }
};
class derived:public base{
    public:
    derived(int data):base(data){
        cout<<"Hello "<<data<<endl;
    }
};
int main(){
    derived d(5);
    return 0;
}