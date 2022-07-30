#include<iostream>
using namespace std;

class simple {
    private:
    // two data members
    // The data members data1 and data2 are accessed only be the member functions
    // setdata and showdata. This is called data hiding 
    
    int data1;
    int data2;

    public:
    // two member functions
    void setdata(int d1,int d2){
        data1 = d1;
        data2 = d2;
    }

    void showdata(){
        cout<<"\ndata1= "<<data1<<endl;
        cout<<"\ndata2= "<<data2<<endl;
    }
};

int main() {
    simple s1,s2;
    s1.setdata(101,102);
    s2.setdata(201,202);
    s1.showdata();
    s2.showdata();
    return 0;
}

