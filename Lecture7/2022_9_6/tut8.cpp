#include<iostream>
using namespace std;
class base_one {
    public:
    base_one(){
        cout<<"Hello from base one constructor"<<endl;
    }
     ~base_one(){
        cout<<"Hello from base one desctructor"<<endl;
    }
};
class base_two {
    public:
    base_two(){
        cout<<"Hello from base two constructor"<<endl;
    }
     ~base_two(){
        cout<<"Hello from base two desctructor"<<endl;
    }
};
class derived:public base_one,public base_two {
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
