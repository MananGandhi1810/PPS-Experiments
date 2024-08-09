/*
Write a program to acppet a nnumber from the user and display if it is Armstrong number.
*/
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n, original, sum = 0, digits = 0;
    cout << "Enter n: ";
    cin >> n;
    original = n;
    while (n > 0)
    {
        digits++;
        n /= 10;
    }
    n = original;
    while (n > 0)
    {
        sum += pow(n % 10, digits);
        n /= 10;
    }
    if (sum == original)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not Armstrong number" << endl;
    }
    return 0;
}