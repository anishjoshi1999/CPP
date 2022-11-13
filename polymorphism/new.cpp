#include<iostream>
using namespace std;
int main(){
    int n,input;
    cout<<"How many elements you want to add"<<endl;
    cin>>n;
    int *p = new int[n];
    for(int i = 0;i < n;i++){
        cout<<"Enter "<<i+1<<" Element"<<endl;
        cin>>input;
        *(p+i) = input;
    }
     for(int i = 0;i < n;i++){
        cout<<"The "<<i+1<<" Element is "<<*(p+i)<<endl;
    }
    
    return 0;
}