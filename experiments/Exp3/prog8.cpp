// Write a program that takes an arithmetic operator (+, -, *, or /) and two operands from the user. Perform corresponding arithmetic operations on the operands using switch case.
#include <iostream>

using namespace std;
int main()
{
    int a, b;
    float result = 0;
    char operation;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter operation: ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        result = a + b;
        break;

    case '-':
        result = a - b;
        break;

    case '*':
        result = a * b;
        break;

    case '/':
        result = a / b;
        break;

    default:
        break;
    }
    cout << "Result: " << result << endl;
    return 0;
}