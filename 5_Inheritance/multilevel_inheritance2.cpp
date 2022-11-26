#include<iostream>
using namespace std;
class GrandFather {
    private:
    int age = 75;
    public:
    void show_grandfather_age(){
        cout<<"The age of the grandfather is:"<<age<<endl;
    }
};
class Father:public GrandFather {
  private:
  int age = 50;
  public:
  void show_father_age(){
      cout<<"The age of the Father is:"<<age<<endl;
  }
};
class Son:public Father {
    private:
    int age = 20;
    public:
    void show_son_age(){
        cout<<"The age of son is:"<<age<<endl;
    }
};
int main(){
    Son s1;
    s1.show_son_age();
    s1.show_father_age();
    s1.show_grandfather_age();
    return 0;
}