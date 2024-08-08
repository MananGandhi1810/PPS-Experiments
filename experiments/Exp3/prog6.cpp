// Write a program that takes three coefficients (a,b,and c) of a quadratic equation; ax2+bx+c=0 as input, compute all possible roots, and print them with appropriate messages.
#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a, b, c in the following format ax^2 + bx + c: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    float r1 = -b + sqrt(pow(b, 2) - 4 * a * c);
    float r2 = -b - sqrt(pow(b, 2) - 4 * a * c);
    cout << r1 << endl;
    cout << r2 << endl;
    return 0;
}