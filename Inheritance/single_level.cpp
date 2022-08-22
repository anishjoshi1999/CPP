#include<iostream>
using namespace std;
class Base{
    private:
    int data1;
    public:
    int data2;
    void setData(){
        data1 = 10;
        data2 = 20;
}
    int getData1(){
        return data1;
}
    int getData2(){
        return data2;
}
};
class Derived:public Base {
    private:
    int data3;
    public:
    void process(){
        data3 = data2 * getData1();
}
    void display(){
        cout<<"Value of Data 1 is "<<getData1()<<endl;
        cout<<"Value of Data 1 is "<<getData2()<<endl;
        cout<<"Value of Data 2 is "<<data2<<endl;
        cout<<"Value of Data 3 is "<<data3<<endl;
}
};
int main(){
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}
