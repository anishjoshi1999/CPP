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
        cout<<"real = "<<real<<" "<<"imag = "<<imag<<endl;
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
        
    }
};
int main(){
    Complex c1, c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    // c3 = c1.add(c2)
    c3 = c1+c2;
    c3.showData();
    return 0;
}
// End of binary operator overloading