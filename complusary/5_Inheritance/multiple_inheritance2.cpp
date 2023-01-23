#include<iostream>
using namespace std;
class Father {
    private:
    string color = "Black";
    public:
    void smart(){
        cout<<"I am smart"<<endl;
    }
    void nationality(){
        cout<<"I am nepali"<<endl;
    }
};
class Mother{
    private:
    string eye_color = "Blue";
    public:
    void skin_color(){
        cout<<"I am white"<<endl;
    }
    void nationality(){
        cout<<"I am an indian"<<endl;
    }
    string college = "KMC";
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
    c1.Mother::nationality();
    cout<<"College Name:"<<c1.college<<endl;
    return 0;
}