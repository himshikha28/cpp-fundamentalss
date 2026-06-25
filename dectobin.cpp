#include <iostream>
using namespace std;

int main(){
    int decimal;
    cout<<"Enter a decimal number";
    cin>>decimal;

    if(decimal==0){
        cout<<"Binary equivalent: 0"<< endl;
        return 0;
    }

    int binary=0;
    int place_value=1;

    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = binary + (remainder * place_value);
        place_value = place_value * 10;
        decimal = decimal / 2;
    }
    cout <<"Binary equivalent:" <<binary<< endl;
    return 0;
}