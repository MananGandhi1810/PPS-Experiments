/*
Write a program in C++ to check the perfect number
*/
#include <iostream>

using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << "Perfect" << endl;
    }
    else
    {
        cout << "Not perfect" << endl;
    }
    return 0;
}