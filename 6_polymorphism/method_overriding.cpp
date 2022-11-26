#include<iostream>
using namespace std;
class Animal {
    public:
    void speak(){
        cout<<"I can speak"<<endl;
    }
    void greeting(){
        cout<<"Hello World from Animal"<<endl;
    }
   
};
class Dog:public Animal {
  public:
//   Method overriding
  void speak(){
      cout<<"Woof Woof"<<endl;
  }
  void greeting(string name){
      cout<<"Hello World from Dog named:"<<name<<endl;
  }
  
};
int main(){
    Dog d1;
    d1.speak();
    // Method Hiding
    d1.greeting();
    
    return 0;
}