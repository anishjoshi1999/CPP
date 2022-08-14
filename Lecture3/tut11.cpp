#include<iostream>
using namespace std;
class Complex {
    private:
    int real;
    int imag;
    public:
    Complex(int r=0, int i = 0){
        real = r;
        imag = i;
    }
    void show_data(){
        cout<<"("<<real<<","<<imag<<")"<<endl;
    }
    friend Complex operator-(Complex c1);
};
Complex operator-(Complex c1){
        Complex temp;
        temp.real = -c1.real;
        temp.imag = -c1.imag;
        return temp;
}
int main(){
    Complex c1(4,5),c2;
    c1.show_data();
    // c2 = c1.operator-();
    // c2 = operator-(c1);
    c2 = -c1;
    c2.show_data();
    return 0;
}