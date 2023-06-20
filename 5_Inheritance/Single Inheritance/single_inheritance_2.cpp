#include<iostream>
using namespace std;
class Person {
    private:
    string name;
    public:
    void set_name(string n){
        name = n;
    }
    void show_name(){
        cout<<"The name of a person is: "<<name<<endl;
    }
};
class Student:public Person {
    private:
    string course;
    public:
    void set_course(string c){
        course = c;
    }
    void show_course(){
        cout<<"The name of the course is: "<<course<<endl;
    }
};
int main(){
    Student s1;
    s1.set_name("Anish Joshi");
    s1.set_course("C++");
    s1.show_name();
    s1.show_course();
    return 0;
}