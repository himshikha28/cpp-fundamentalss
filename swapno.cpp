#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"\nbefore swapping : a="<<a<<", b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swap : a="<<a<<" , b="<<b<<endl;
    return 0;
}