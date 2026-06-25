#include <iostream>
using namespace std;

void greetUser(string name, string greeting ="Hello"){
    cout<<greeting << ", "<< name << "!" << endl;
}

int main() {
    cout << "Providing both arguments:" << endl;
    greetUser("Himshikha", "Good morning");

    cout << "\nProviding only one argument:" << endl;
    greetUser("Himshikha");

    return 0;
}