#include<iostream>
using namespace std;
class Animal {
    public:
    void eat(){
        cout<<"I am eating"<<endl;
    }
    void sleep(){
        cout<<"I am sleeping"<<endl;
    }
};
class Dog:public Animal {
    public:
    void bark(){
        cout<<"Woof!!"<<endl;
    }
};
int main(){
    Dog d1;
    d1.eat();
    d1.sleep();
    d1.bark();
    return 0;
}