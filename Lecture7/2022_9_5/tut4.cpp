#include<iostream>
using namespace std;
class Person {
    public:
    Person(){
        cout<<"Hello from default constructor"<<endl;
    }
    Person(string n){
        cout<<"Hello from parameterized constructor: "<<n<<endl;
    }
    ~Person(){
        cout<<"Hello from destructor"<<endl;
    }
};
int main(){
    Person p2("Harry");
    Person p;
    Person p1("Mike");
    return 0;
}