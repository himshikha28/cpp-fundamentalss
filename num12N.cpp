#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N";
    cin>>n;

    cout<<"1 to N"<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"N to 1"<<endl;
    for(int i=n;i>=1;i--){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}