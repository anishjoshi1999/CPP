#include<iostream>
using namespace std;
class Complex{
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
    friend ostream& operator<<(ostream&,Complex);
    friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream&dout,Complex C){
    cout<<"("<<C.real<<","<<C.imag<<")"<<endl;
    return dout;
}
istream& operator>>(istream&din,Complex &C){
    cin>>C.real>>C.imag;
    return din;
}
int main(){
    Complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}