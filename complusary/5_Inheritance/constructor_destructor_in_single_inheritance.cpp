#include<iostream>
using namespace std;
class base {
    public:
    base(){
        cout<<"Hello from base constructor"<<endl;
    }
     ~base(){
        cout<<"Hello from base desctructor"<<endl;
    }
};
class derived:public base {
    public:
    derived(){
        cout<<"Hello from derived constructor"<<endl;
    }
     ~derived(){
        cout<<"Hello from derived desctructor"<<endl;
    }
   
};
int main(){
   derived d;
    return 0;
}
