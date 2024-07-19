// A four-digit number is inputted through the keyboard. Write a program to calculate sum of digits of a number.
#include <iostream>

using namespace std;
int main()
{
    int n = 0, sum = 0;
start:
    cout << "Enter a 4 digit number: ";
    cin >> n;
    if (n < 1000 || n > 9999)
    {
        cout << n << " is not a 4 digit number" << endl;
        goto start;
    }
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}