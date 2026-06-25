#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter num";
    cin>>num;
    while(num!=0){
        int ld = num%10;
        sum=sum+ld;
        num=num/10;
    }
    cout<<sum<<endl;
    return 0;
}