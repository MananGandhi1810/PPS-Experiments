// Write a program to overload sum function to perform addition of two integers, three integers and two floating-point numbers.
#include <iostream>
using namespace std;

int sum(int, int);
int sum(int, int, int);
float sum(float, float);

int main()
{
    int a = 2, b = 5, c = 8;
    float x = 2.4, y = 5.3;
    cout << a << " + " << b << " = " << sum(a, b) << endl
         << a << " + " << b << " + " << c << " = " << sum(a, b, c) << endl
         << x << " + " << y << " = " << sum(x, y) << endl;
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

float sum(float a, float b)
{
    return a + b;
}