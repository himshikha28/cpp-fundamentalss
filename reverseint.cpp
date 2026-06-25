#include<iostream>
using namespace std;
int main(){
    int num,ans=0;
    cout<<"Enter num";
    cin>>num;
    while (num!=0)
    {
        int ld=num%10;
        ans=(ans*10)+ld;
        num=num/10;
    }
    cout<<ans<<endl;
    return 0;
}