#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"\nbefore swapping : a="<<a<<", b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swap : a="<<a<<" , b="<<b<<endl;
    return 0;
}