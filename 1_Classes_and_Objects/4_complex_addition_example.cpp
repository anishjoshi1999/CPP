#include<iostream>
using namespace std;

class complex {
    private:
        float real;
        float imag;
    public:
        void get_values(){
            cout<<"Enter Real Part: ";
            cin>>real;
            cout<<"Enter Imaginary Part: ";
            cin>>imag;
        }
        void show_value(){
            cout<<"("<<real<<","<<imag<<")";
        }
        complex add(complex c){
            complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }
};
int main(){
    complex c1,c2,c3;
    cout<<"Enter first complex number: "<<endl;
    c1.get_values();
     cout<<"Enter Second complex number: "<<endl;
    c2.get_values();
    // Show values of a complex number
    c1.show_value();
    cout<<" + ";
    c2.show_value();

    c3=c1.add(c2);
    cout<<" = ";
    c3.show_value();
    return 0;

}