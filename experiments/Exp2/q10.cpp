// Write a program to find largest of two numbers using ternary operator.
#include <iostream>

using namespace std;
int main()
{
    int a, b, largest;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    largest = a > b ? a : b;
    cout << "Largest: " << largest << endl;
    return 0;
}