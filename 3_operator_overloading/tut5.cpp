// Operator overloading for unary operators
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
    Complex operator-(){
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
        
    }
};
int main(){
    Complex c1, c2,c3;
    c1.setData(3,4);
    // c2 = c1.operator-()
    c2 = -c1;
    c2.showData();
    return 0;
}
// End of binary operator overloading