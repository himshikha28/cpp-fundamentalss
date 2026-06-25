#include<iostream>
using namespace std;
int main(){
    int num;
    int ans=0;
    cout<<"Enter num";
    cin>>num;
    int original=num;
    while(num!=0){
        int ld=num%10;
        ans=(ans*10)+ld;
        num=num/10;
    }
    if(original==ans){
        cout<<original<<"is pallindrome"<<endl;
    }else{
        cout<<original<<"is not pallindrome"<<endl;
    }
    return 0;
}
cd "/Users/himshikhapaliwal/Documents/C++/" && g++ pallindrome.cpp -o pallindrome && "/Users/himshikhapaliwal/Documents/C++/"pallindrome