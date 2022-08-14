// preincrement
#include<iostream>
using namespace std;
class Integer {
    private:
    int x;
    public:
    void setData(int a){
        x = a;
    }
    void showData(){
        cout<<"a="<<x<<endl;
    }
    // preincrement
    Integer operator++(){
        Integer i;
        i.x = ++x;
        return i;
    }
};
int main(){
    Integer i1,i2;
    i1.setData(3);
    // i2 = i1.operator++()
    i2 = ++i1;
    i1.showData();
    i2.showData();
    return 0;
}