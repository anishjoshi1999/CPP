#include<iostream>
using namespace std;
class info{
  public:
  float english,maths,science;
//   declare a static variable
  static int age;
  void set_value(float e,float m,float s){
      english = e;
      maths = m;
      science = s;
  }
  void show_value(){
      cout<<english<<","<<maths<<","<<science<<endl;
  }
};
// defining a static variable
int info::age = 23;
int main(){
    info i1,i2,i3;
    i1.set_value(45,60,70);
    i2.set_value(50,66,77);
    i3.set_value(60,70,80);
    i1.show_value();
    i2.show_value();
    i3.show_value();
    cout<<i1.age<<endl;
    cout<<i2.age<<endl;
    cout<<i3.age<<endl;
    cout<<info::age<<endl;
    
    return 0;
}