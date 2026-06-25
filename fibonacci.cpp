#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    int a=0,b=1;
    for (int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        int nextterm=a+b;
        a=b;
        b=nextterm;  
    }
    cout<<endl;
    return 0;
    
}
