/*
Write an algowrithem to find if a number is a palindrome or not
*/
#include <iostream>

using namespace std;
int main()
{
    int n, original, reverse = 0;
    cout << "Enter n: ";
    cin >> n;
    original = n;
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    if (reverse == original)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not palindrome" << endl;
    }
    return 0;
}