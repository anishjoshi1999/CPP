#include<iostream>
using namespace std;
class Father {
  private:
  string color = "Black";
  int age;
  public:
  void tall(){
      cout<<"I am tall"<<endl;
  }
  void set_age(int x){
      age = x;
  }
  void show_age(){
      cout<<"Age:"<<age<<endl;
  }
};
class Mother {
  private:
  string eye_color = "blue";
  public:
  void skin_color(){
      cout<<"I am white"<<endl;
  }
};
class Child:public Father,public Mother{
    public:
    void smart(){
        cout<<"I am smart"<<endl;
    }
    void love_things(){
        cout<<"I love sports"<<endl;
    }
};
int main(){
    Child c1;
    c1.smart();
    c1.love_things();
    c1.tall();
    c1.skin_color();
    c1.set_age(20);
    c1.show_age();
    return 0;
}