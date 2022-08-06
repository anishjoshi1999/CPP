#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee emp,emp1,emp2;
  emp.setSalary(60000);
  emp1.setSalary(10000);
  cout <<"The salaries of employees are: "<<emp.getSalary()<<","<<emp1.getSalary()<<"and"<<emp2.getSalary()<<endl;

  return 0;
}