/*
Write a program to print the sum of the last and the first digit of a number the user gives. (Using-While)
*/
#include <iostream>

using namespace std;
int main()
{
    int first = 0, last = 0, n = 0, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    last = n % 10;
    n /= 10;
    while (n > 0)
    {
        first = n % 10;
        n /= 10;
    }
    sum = first + last;
    cout << "Sum: " << sum << endl;
    return 0;
}