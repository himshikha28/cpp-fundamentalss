#include <iostream>
using namespace std;
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Initial Values" << endl;
    cout <<"a="<<a<<", b = "<<b<<endl<< endl;

    swapByValue(a, b);
    cout << " After swapByValue (No actual change)" << endl;
    cout << "a = "<<a<<", b = "<<b<<endl<< endl;

    swapByReference(a, b);
    cout << "After swapByReference (successfully changed)" << endl;
    cout << "a = "<<a<< ",b = " <<b<< endl;
    
    return 0;
}