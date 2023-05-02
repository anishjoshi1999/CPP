#include<iostream>
// Static variables are also called class variable
// because it is oriented with class
using namespace std;
class Employee {
    int id;
    static int count;
    public:
    void setData(void){
        cout<<"Enter the id of an employee"<<endl;
        cin>>id;
        count++;
        
    }
    void getData(void){
        cout<<"The id of an employee "<<count<< " is: "<<id<<endl;
    }
};
// Initialize static member of class Employee
int Employee::count;

int main(){
    
    Employee saroj,anish,mahendra;
    saroj.setData();
    saroj.getData();
    anish.setData();
    anish.getData();
    mahendra.setData();
    mahendra.getData();
    return 0;
}