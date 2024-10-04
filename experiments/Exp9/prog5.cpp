/*
Create a class named “Shapes” with data member area.
Write a member function “calArea” with two float parameters to calculate the area of rectangle and overload the same function having one float parameter to calculate the area of square.
*/
#include <iostream>
using namespace std;

class Shapes
{
public:
    float calArea(float, float);
    float calArea(float);
};

float Shapes::calArea(float a, float b)
{
    return a * b;
}

float Shapes::calArea(float a)
{
    return a * a;
}

int main()
{
    int choice;
    cout << "1. Rectangle, 2. Square. Enter choice: ";
    cin >> choice;
    Shapes shapes;
    float a, b, area = 0;
    switch (choice)
    {
    case 1:
        cout << "Enter length and breadth: ";
        cin >> a >> b;
        area = shapes.calArea(a, b);
        break;

    case 2:
        cout << "Enter side: ";
        cin >> a;
        area = shapes.calArea(a);
        break;

    default:
        break;
    }
    cout << "Area: " << area << endl;
    return 0;
}