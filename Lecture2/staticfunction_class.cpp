#include<iostream>
using namespace std;
class info{
  private:
  float english,maths,science;
//   Declare a static variable
  static int age;
  public:
  void set_data(float e,float m,float s){
      english = e;
      maths = m;
      science = s;
  }
  void show_data(){
      cout<<english<<" "<<maths<<" "<<science<<endl;
      cout<<"Age: "<<age<<endl;
  }
  static void set_age(int a){
      age = a;
  }
};
// Define a static variable
int info::age;

int main(){
    info::set_age(23);
    info i1,i2,i3;
    i1.set_data(85,90,67);
    i2.set_data(80,92,78);
    i3.set_data(58,80,65);
    i1.show_data();
    i2.show_data();
    i3.show_data();
    return 0;
}