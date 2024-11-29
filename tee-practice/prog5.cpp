// Complex num ops using structs
#include <iostream>
using namespace std;

struct ComplexNumber
{
    int real;
    int imaginary;
};

void add(ComplexNumber a, ComplexNumber b)
{
    cout << a.real + b.real << " + " << a.imaginary + b.imaginary << "i" << endl;
}

void subtract(ComplexNumber a, ComplexNumber b)
{
    cout << a.real - b.real << " + " << a.imaginary - b.imaginary << "i" << endl;
}

void multiply(ComplexNumber a, ComplexNumber b)
{
    cout << (a.real * b.real) - (a.imaginary * b.imaginary) << " + " << (a.real * b.imaginary) + (a.imaginary * b.real) << "i" << endl;
}

int main()
{
    ComplexNumber a, b;
    a.real = 10;
    a.imaginary = 20;
    b.real = 25;
    b.imaginary = 5;
    add(a, b);
    subtract(a, b);
    multiply(a, b);
    return 0;
}