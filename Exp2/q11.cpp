// If the length of three sides of a triangle is input through the keyboard, write a program to find the area of triangle and check whether the triangle is valid or not using conditional operator. Hint: - A triangle is valid if the sum of its two sides is greater than the third side.
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double a, b, c, area, semi_perimeter;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    if (((a + b) > c) && ((b + c) > a) && ((c + a) > b))
    {
        semi_perimeter = (a + b + c) / 2;
        area = sqrt(semi_perimeter * (semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c));
        cout << "Area: " << area << endl;
    }
    else
    {
        cout << "Triangle is not valid" << endl;
    }
    return 0;
}