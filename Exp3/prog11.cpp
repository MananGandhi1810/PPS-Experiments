/*
Build a program to determine the second largest number from a set of three numbers
*/
#include <iostream>

using namespace std;
int main()
{
    int a, b, c, largest;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    if (a > b && b > c)
    {
        largest = b;
    }
    else if (b > c && c > a)
    {
        largest = c;
    }
    else if (c > a && a > b)
    {
        largest = a;
    }
    cout << "Largest: " << largest << endl;
    return 0;
}