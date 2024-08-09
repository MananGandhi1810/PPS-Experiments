/*
Write a program to find the sum of all numbers between M and N, where N>M, using for loop.
*/
#include <iostream>

using namespace std;
int main()
{
    int m, n, sum = 0, i;
    cout << "Enter m and n: ";
    cin >> m >> n;
    if (m >= n)
    {
        cout << "Invalid input";
        return 0;
    }
    for (i = m; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}