// Write a program to find area & perimeter of a circle
#include <iostream>

using namespace std;
int main() {
    unsigned int radius = 0;
    double area, perimeter;
    cout << "Enter radius: ";
    cin >> radius;
    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    return 0;
}