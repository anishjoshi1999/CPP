// postincrement
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
    // postincrement
    Integer operator++(int){
        Integer i;
        i.x = x;
        x = x + 1;
        return i;
    }
};
int main(){
    Integer i1,i2;
    i1.setData(3);
    i2 = i1++;
    i2.showData();
    i1.showData();
    return 0;
}