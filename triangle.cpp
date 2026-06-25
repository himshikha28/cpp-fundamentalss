#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3;
    cout<<"Enter Angle 1";
    cin>>a1;
    cout<<"Enter Angle 2";
    cin>>a2;
    cout<<"Enter Angle 3";
    cin>>a3;
    if((a1+a2+a3==180)&&((a1>0)&&(a2>0)&&(a3>0))){
        cout<<"Valid Triangle"<<endl;
    }else{
        cout<<"Not Valid Triangle"<<endl;
    }
    return 0;
}