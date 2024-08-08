// A four-digit number is inputted through the keyboard. Write a program to reverse the number.
#include <iostream>

using namespace std;
int main()
{
    int n = 0, reverse = 0;
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
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    }
    cout << "Reverse: " << reverse << endl;
    return 0;
}