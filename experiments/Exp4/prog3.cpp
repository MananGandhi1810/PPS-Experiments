/*
Write a program to accept a number from the user. Find and print the sum of digits of the number using do-while loop.
*/
#include <iostream>

using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    do
    {
        sum += n % 10;
        n /= 10;
    } while (n > 0);
    cout << "Sum: " << sum << endl;
    return 0;
}