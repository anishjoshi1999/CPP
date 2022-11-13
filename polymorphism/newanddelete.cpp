#include<iostream>
using namespace std;
int main(){
    int n,input;
    int sum = 0;
    cout<<"How many elements you want to sum"<<endl;
    cin>>n;
    int *p = new int[n];
    for(int i = 0;i < n;i++){
        cout<<"Enter "<<i+1<<" Element"<<endl;
        cin>>input;
        *(p+i) = input;
    }
     for(int i = 0;i < n;i++){
        sum = sum + *(p+i);
    }
    delete []p;
     
    cout<<"The sum of "<<n<<" elements are "<<sum<<endl;
    
    return 0;
}