// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Box{
    private:
    int l,b,h;
    public:
    void set_value(int l,int b,int h){
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void show_value(){
        cout<<"Length:"<<l<<endl;
        cout<<"Breadth:"<<b<<endl;
        cout<<"Height:"<<h<<endl;
    }
};
int main() {
    Box b1;
    Box *p;
    p = &b1;
    p->set_value(1,2,3);
    p->show_value();

    return 0;
}