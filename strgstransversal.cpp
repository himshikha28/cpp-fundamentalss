#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str); 

    int vowels = 0, consonants = 0, spaces = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        } else if (ch == ' ') {
            spaces++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "White Spaces: " << spaces << endl;

    return 0;
}