#include<iostream>
using namespace std;
// From Saurabh Shukla

class complex {
    private:
        float real;
        float imag;
    public:
        void realvalues(){
            cout<<"Enter Real Part: ";
            cin>>real;
            cout<<"Enter Imaginary Part: ";
            cin>>imag;
        }
        void showvalue(){
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
    c1.realvalues();
     cout<<"Enter Second complex number: "<<endl;
    c2.realvalues();
    // Show values of a complex number
    c1.showvalue();
    cout<<" + ";
    c2.showvalue();

    c3=c1.add(c2);
    cout<<" = ";
    c3.showvalue();
    return 0;

}