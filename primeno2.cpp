#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n<=1){
        cout<<"not prime"<<endl;
        return 0;
    }
    int factor_count=0;
    for (int i = 2; i*i <= n; i++){
       if(n%i==0){
        factor_count++;
        break;
       }
    }
    if(factor_count==0){
        cout<<n<<" is prime"<<endl;
    }else{
        cout<<n<<" is not prime"<<endl;
    }
    return 0;
}
    