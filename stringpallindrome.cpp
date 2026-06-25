#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a word to check for palindrome: ";
    cin >> str;

    int left = 0;
    int right = str.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout<<str << " is a palindrome!" << endl;
    } else {
        cout<<str << " is NOT a palindrome." << endl;
    }

    return 0;
}