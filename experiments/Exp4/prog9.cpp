/*
Write a program using loop to find the Greatest Common Divisor (GCD) and Least Common Multiple (LCM) of two numbers.
*/
#include <iostream>

using namespace std;
void lcm(int, int);
void gcd(int, int);
int main()
{
    int n1, n2;
    int choice = 0;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;
    cout << "Enter choice (1 for LCM, 2 for GCD): ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        lcm(n1, n2);
        break;

    case 2:
        gcd(n1, n2);
        break;

    default:
        cout << "Invalid input" << endl;
        break;
    }
}

void lcm(int n1, int n2)
{
    if (n2 > n1)
    {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    while (true)
    {
        if (n1 % n2 == 0)
        {
            cout << "LCM is " << n1 << endl;
            break;
        }
        n1 *= 2;
    }
}

void gcd(int n1, int n2)
{
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 -= n2;
        }
        else
        {
            n2 -= n1;
        }
    }
    cout << n1 << endl;
}