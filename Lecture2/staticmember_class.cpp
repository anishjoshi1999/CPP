#include<iostream>
using namespace std;
class info{
  public:
  float english,maths,science;
//   Declare a static variable
  static int age;
  void set_data(float e,float m,float s){
      english = e;
      maths = m;
      science = s;
  }
};
// Define a static variable
int info::age = 23;

int main(){
    info i1,i2,i3;
    i1.set_data(85,90,67);
    i2.set_data(80,92,78);
    i3.set_data(58,80,65);
    cout<<i1.english<<" "<<i1.maths<<" "<<i1.science<<endl;
    cout<<i2.english<<" "<<i2.maths<<" "<<i2.science<<endl;
    cout<<i3.english<<" "<<i3.maths<<" "<<i3.science<<endl;
    cout<<"Age: "<<i1.age<<endl;
    cout<<"Age: "<<i2.age<<endl;
    cout<<"Age: "<<i3.age<<endl;
    return 0;
}