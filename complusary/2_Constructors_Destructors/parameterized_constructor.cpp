#include<iostream>
using namespace std;
class box{
    private:
    int length;
    int breadth;
    int height;
    public:
    box(int l , int b,int h){
        length = l;
        breadth = b;
        height = h;
    }
    void show_data(){
        cout<<length<<","<<breadth<<","<<height<<endl;
    }
};

int main(){
    box b1(3,4,5);
    return 0;
    
}