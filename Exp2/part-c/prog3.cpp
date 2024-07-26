// Implement a program to find GCD of N numbers
#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    cout << a << endl;
    return 0;
}