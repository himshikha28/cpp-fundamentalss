#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    int original_a = a;
    int original_b = b;

    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        } else {
            b = b%a;
        }
    }
    int gcd;
    if(a==0) {
        gcd=b;
    } else {
        gcd=a;
    }
    int lcm = (original_a / gcd) * original_b;

    cout << "gcd is" << gcd << endl;
    cout << "lcm is" << lcm << endl;
    
    return 0;   
}