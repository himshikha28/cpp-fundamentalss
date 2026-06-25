#include <iostream>
using namespace std;

int calculateFactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact; 
}

int main(){
    int num;
    cout<<"Enter a number for factorial:";
    cin>>num;

    if(num<0) {
        cout<<"Factorial of negative numbers isn't possible"<<endl;
    } else{
        int result=calculateFactorial(num);
        cout <<"Factorial of"<< num<<"is:"<< result<< endl;
    }
    return 0;
}