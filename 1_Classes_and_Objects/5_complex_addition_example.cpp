#include<iostream>
using namespace std;

class complex {
    private:
        float real;
        float imag;
    public:
        void set_values(){
            cout<<"Enter Real Part: ";
            cin>>real;
            cout<<"Enter Imaginary Part: ";
            cin>>imag;
        }
        void show_value(){
            cout<<"("<<real<<","<<imag<<")";
        }
        void add(complex c1, complex c2){
            real= c1.real+c2.real;
            imag = c1.imag+c2.imag;
        }
};

int main(){
    complex c1,c2,c3;
    cout<<"Enter first complex number: "<<endl;
    c1.set_values();
     cout<<"Enter Second complex number: "<<endl;
    c2.set_values();
    // Show values of a complex number
    c1.show_value();
    cout<<" + ";
    c2.show_value();
    c3.add(c1,c2);
    cout<<" = ";
    c3.show_value();
    return 0;

}