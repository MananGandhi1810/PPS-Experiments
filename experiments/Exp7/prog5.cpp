// Write a menu driven program to compute sum of digits of a number, to find reverse of a number, to count number of digits using user defined functions
#include <iostream>
using namespace std;

int sum(int);
int reverse(int);
int digits(int);

int main()
{
    int choice, n, res;
    cout << "Enter 1 for sum, 2 for reverse and 3 for number of digits: ";
    cin >> choice;
    cout << "Enter a number: ";
    cin >> n;
    switch (choice)
    {
    case 1:
        res = sum(n);
        break;

    case 2:
        res = reverse(n);
        break;

    case 3:
        res = digits(n);
        break;

    default:
        break;
    }
    cout << "Result: " << res << endl;
    return 0;
}

int sum(int n)
{
    int res = 0;
    while (n != 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int reverse(int n)
{
    int res = 0;
    while (n != 0)
    {
        res = (res * 10) + (n % 10);
        n /= 10;
    }
    return res;
}

int digits(int n)
{
    int res = 0;
    while (n != 0)
    {
        res++;
        n /= 10;
    }
    return res;
}