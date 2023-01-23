#include<iostream>
using namespace std;
class Complex {
    private:
        int real;
        int imag;
    public:
        void set_data(int r,int i){
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

};
int main(){
    Complex c1,c2,c3;
    c1.set_data(2,3);
    c2.set_data(3,2);
    c3 = c1+c2;
    c1.show_data();
    c2.show_data();
    c3.show_data();

    return 0;
}