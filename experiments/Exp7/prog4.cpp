// Write a function to calculate factorial of a given number
#include <iostream>
using namespace std;

int fact(int);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial: " << fact(n) << endl;
    return 0;
}

int fact(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return n * fact(n - 1);
}