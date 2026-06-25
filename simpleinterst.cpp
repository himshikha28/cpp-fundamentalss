#include<iostream>
using namespace std;
int main(){
    int p,t,r,si;
    cout<<"enter principle:";
    cin>>p;
    cout<<"enter time:";
    cin>>t;
    cout<<"enter rate:";
    cin>>r;
    si=(p*t*r)/100;
    cout<<"Simple Interst:"<< si <<endl;
    return 0;
}