#include<iostream>
using namespace std;
class Complex {
    private:
    int real;
    int imag;
    public:
    void get_data(int r,int i){
        real = r;
        imag = i;
    }
    void show_data(){
        cout<<"("<<real<<","<<imag<<")"<<endl;
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
     Complex operator-(Complex c){
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
    Complex operator*(Complex c){
        Complex temp;
        temp.real = real * c.real;
        temp.imag = imag * c.imag;
        return temp;
    }
};
int main(){
    Complex c1,c2,c3,c4,c5;
    c1.get_data(4,5);
    c1.show_data();
    c2.get_data(6,5);
    c2.show_data();
    // c3 = c1.operator+(c2)
    c3 = c1+c2;
     // c4 = c1.operator-(c2)
    c4 = c1-c2;
     // c5 = c1.operator*(c2)
    c5 = c1*c2;
    c3.show_data();
    c4.show_data();
    c5.show_data();
    return 0;
}
