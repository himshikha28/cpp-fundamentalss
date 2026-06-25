#include <iostream>
using namespace std;

int calculateArea(int side) {
    return side * side;
}

int calculateArea(int length, int breadth) {
    return length * breadth;
}

double calculateArea(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    cout << "Area of Square (side 5): " << calculateArea(5) << endl;
    cout << "Area of Rectangle (5x10): " << calculateArea(5, 10) << endl;
    cout << "Area of Circle (radius 3.5): " << calculateArea(3.5) << endl;

    return 0;
}