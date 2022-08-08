#include<iostream>
using namespace std;
class Complex {
    private:
    int real,imag;
    public:
    void setData(int r,int i){
        real = r;
        imag = i;
    }
    void showData(){
        cout<<"("<<real<<","<<imag<<")"<<endl;
    }
    // Declare a friend function
    friend void fun(Complex);
};
void fun(Complex c){
     cout<<"("<<c.real<<","<<c.imag<<")"<<endl;
}
int main(){
    Complex c1;
    c1.setData(4,5);
    c1.showData();
    fun(c1);
    return 0;
}
// Note
// friend function is not a member function of a class to which it is a friend
// friend function is declared in the class with friend keyword
// it must be defined out side the class to which it is friend
// friend function can access any member of the class to which it is friend
// friend function cannot access members of the class directly 
// it has no caller object
// it should not be defined with membership label

