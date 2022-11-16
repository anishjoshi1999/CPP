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
        cout<<"The name of the person is: "<<name<<endl;
    }
};
class Student:public Person {
    private:
    string course_name;
    public:
    void set_course(string c){
        course_name = c;
    }
    void show_course(){
        cout<<"The name of the course is: "<<course_name<<endl;
    }
};
class Teacher:public Person {
    private:
    string course_taught;
    public:
    void set_course_taught(string s){
        course_taught = s;
    }
    void show_course_taught(){
        cout<<"The name of the course taught is: "<<course_taught<<endl;
    }
};
class Doctor:public Person {
    private:
    string type_of_doctor;
    public:
    void set_type_of_doctor(string t){
        type_of_doctor = t;
    }
    void show_type_of_doctor(){
        cout<<"The type of doctor is: "<<type_of_doctor<<endl;
    }
};
int main(){
    Student s;
    Teacher t;
    Doctor d;
    s.set_name("Ravi Giri");
    s.set_course("BSC CSIT");
    t.set_name("Anish Joshi");
    t.set_course_taught("C++ and OS");
    d.set_name("Ram Bhandari");
    d.set_type_of_doctor("Cardiologist");
    s.show_name();
    s.show_course();
    t.show_name();
    t.show_course_taught();
    d.show_name();
    d.show_type_of_doctor();


    return 0;
}