#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter n";
    cin>>n;
    int original=n;
    while(n!=0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    }
    if(original==sum){
        cout<<original<<" is armstrong number"<<endl;
    }else{
        cout<<original<<" is not armstrong number"<<endl;
    }
    return 0;
}