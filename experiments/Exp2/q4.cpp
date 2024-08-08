// Given the value of x, y, and z. Write a program to rotate their values such that x has value of y, y has value of z and z has value of x.
#include <iostream>

using namespace std;
int main()
{
    int x = 0, y = 0, z = 0;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
    z = x + y + z;
    y = z - x - y;
    x = z - x - y;
    z = z - x - y;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    return 0;
}