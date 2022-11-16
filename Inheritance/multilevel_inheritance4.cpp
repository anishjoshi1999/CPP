#include<iostream>
using namespace std;
class Person {
    private:
    string name;
    public:
    void set_name(string s){
        name = s;
    }
    void show_name(){
        cout<<"From Person class: The name of the person is: "<<name<<endl;
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
        cout<<"From Student class: The name of the course is: "<<course<<endl;
    }
};
class BSC_CSIT:public Student{
    private:
    string college_name;
    int year;
    int semester;
    public:
    void set_bsc_csit_info(string c_name,int y,int s){
        college_name = c_name;
        year = y;
        semester = s;
    }
    void show_bsc_csit_info(){
        cout<<"From BSC_CSIT class: The college name is: "<<college_name<<endl;
        cout<<"From BSC_CSIT class: The year in which student is in : "<<year<<endl;
        cout<<"From BSC_CSIT class: The semester in which student is in: "<<semester<<endl;
    }
};
int main(){
    BSC_CSIT bsc1;
    bsc1.set_name("Anish Joshi");
    bsc1.set_course("Computer Science");
    bsc1.set_bsc_csit_info("KMC",2,1);
    bsc1.show_name();
    bsc1.show_course();
    bsc1.show_bsc_csit_info();


    return 0;
}