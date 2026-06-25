#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string to reverse: ";
    getline(cin, str);

    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    cout <<"Reversed string:"<<str<< endl;

    return 0;
}