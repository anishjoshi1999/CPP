#include<iostream>
using namespace std;
class base_one {
    public:
    base_one(){
        cout<<"Hello from base 1"<<endl;
    }
     base_one(int data){
        cout<<"Hello from base 1 parameterized "<<data<<endl;
    }
     ~base_one(){
        cout<<"Hello from base 1 destructor"<<endl;
    }
};
class base_two{
    public:
    base_two(){
        cout<<"Hello from base 2"<<endl;
    }
     base_two(int data){
        cout<<"Hello from base 2 parameterized "<<data<<endl;
    }
     ~base_two(){
        cout<<"Hello from base 2 destructor"<<endl;
    }
};
class derived:public base_one,public base_two{
    public:
    derived(){
        cout<<"Hello from derived"<<endl;
    }
     derived(int a,int b,int c):base_one(a),base_two(b){
        cout<<"Hello from derived parameterized constructor"<<c<<endl;
    }
     ~derived(){
        cout<<"Hello from derived destructor"<<endl;
    }
};
int main(){
    derived d;
    // derived d1(3,4,5);
    return 0;
}