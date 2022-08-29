#include<iostream>
using namespace std;
// Parent class
class Animal {
    public:
    void eat(){
        cout<<"I am eating"<<endl;
    }
    void sleep(){
        cout<<"I am sleeping"<<endl;
    }
};
// Child Class
class Dog:public Animal {
    public:
    void bark(){
        cout<<"Woof !!"<<endl;
    }
};
// Child Class 
class Cat:public Animal {
    public:
    void meow(){
        cout<<"Meow !!"<<endl;
    }
};

int main(){
    Dog d1;
    Cat c1;
    d1.eat();
    d1.sleep();
    d1.bark();
    c1.eat();
    c1.sleep();
    c1.meow();
    return 0;
}
