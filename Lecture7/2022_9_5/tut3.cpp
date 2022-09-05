#include<iostream>
using namespace std;
class Person {
    public:
    void person_features(){
        cout<<"I like speaking"<<endl;
        cout<<"I like sleeping"<<endl;
        cout<<"I like eating"<<endl;
    }
};
class Father:virtual public Person {
    private:
    string color = "Black";
    public:
    void smart(){
        cout<<"I am smart"<<endl;
    }
};
class Mother:virtual public Person{
    private:
    string eye_color = "Blue";
    public:
    void skin_color(){
        cout<<"I am white"<<endl;
    }
};
class Child:public Father,public Mother{
    public:
    void interests(){
        cout<<"I am interested in cricket"<<endl;
        cout<<"I like to go to gym"<<endl;
    }
};
int main(){
    Child c1;
    c1.smart();
    c1.skin_color();
    c1.interests();
    c1.person_features();
    return 0;
}