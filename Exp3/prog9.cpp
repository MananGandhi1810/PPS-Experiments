// Implement a menu-driven program to calculate the area of a triangle, rectangle, circle.
#include <iostream>

using namespace std;
int main()
{
    int choice;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Circle" << endl;
    cout << "Enter shape: ";
    cin >> choice;
    if (choice == 1)
    {
        float base, height, area;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        area = 0.5 * base * height;
        cout << "Area: " << area;
    }
    else if (choice == 2)
    {
        float length, breadth, area;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
        area = length * breadth;
        cout << "Area: " << area;
    }
    else if (choice == 3)
    {
        float radius, area;
        cout << "Enter radius: ";
        cin >> radius;
        area = 3.14 * radius * radius;
        cout << "Area: " << area;
    }
    cout << endl;
    return 0;
}