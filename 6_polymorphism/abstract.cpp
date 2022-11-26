// A do nothing function is pure virtual function
#include<iostream>
using namespace std;
class Person {
    public:
    void fun();


};
void Person::fun(){
    cout<<"Hello there"<<endl;
}
int main(){
    Person p1;
    p1.fun();

    return 0;
}