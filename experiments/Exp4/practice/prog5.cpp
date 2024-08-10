/*
Write a program to find the power of a number X^Y; here, X is base and Y is exponent (using for loop)
*/
#include <iostream>

using namespace std;
int main()
{
    int x, y, product = 1;
    cout << "Enter x and y: ";
    cin >> x >> y;
    for (int i = 1; i <= y; i++)
    {
        product *= x;
    }
    cout << "Product: " << product << endl;
    return 0;
}