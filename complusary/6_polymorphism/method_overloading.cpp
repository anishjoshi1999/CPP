#include<iostream>
using namespace std;
class Compute {
    public:
        int add(int x,int y){
            return x + y;
        }
        int add(int x,int y,int z){
            return x + y + z;
        }
};


int main(){
    Compute c;
    int sum_of_two;
    int sum_of_three;
    sum_of_two = c.add(3,2);
    sum_of_three = c.add(3,2,4);
    cout<<"The sum of two numbers are "<<sum_of_two<<endl;
    cout<<"The sum of three numbers are "<<sum_of_three<<endl;
    return 0;
}