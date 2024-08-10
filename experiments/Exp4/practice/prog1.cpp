/*
Write a program to display the sum of N terms of even natural numbers.
Hint:-Suppose value of N=6, then first N terms are 2+4+6+8+10+12
*/
#include <iostream>

using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i * 2;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}