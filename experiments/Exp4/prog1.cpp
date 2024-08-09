/*
Write a program to find the sum of the series 1^2 + 2^2 + 3^2 + ... N^2 using while loop
*/
#include <iostream>

using namespace std;
int main()
{
    int n, sum = 0, i = 0;
    cout << "Enter n: ";
    cin >> n;
    while (i <= n)
    {
        sum += i * i;
        i++;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}