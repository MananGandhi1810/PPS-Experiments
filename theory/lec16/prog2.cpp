// Write a program to find power of a number. If n is not given, consider the default value to be 2
#include <iostream>
using namespace std;

int power(int, int = 2);

int main()
{
    int choice, m, n, res;
    cout << "1. Square" << endl
         << "2. Custom n" << endl
         << "Enter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter a number: ";
        cin >> m;
        res = power(m);
        break;
    case 2:
        cout << "Enter a number and its power: ";
        cin >> m >> n;
        if (n == 0)
        {
            res = power(m);
        }
        else
        {
            res = power(m, n);
        }
        break;

    default:
        break;
    }
    cout << "Result: " << res << endl;
    return 0; 
}

int power(int m, int n)
{
    int res = 1;
    while (n != 0)
    {
        res *= m;
        n--;
    }
    return res;
}