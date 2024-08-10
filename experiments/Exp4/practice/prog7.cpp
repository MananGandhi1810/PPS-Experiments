/*
Write a program to count +ve number, -ve number and zeros until user want, make use of do while loop. (using do-while)
*/
#include <iostream>

using namespace std;
int main()
{
    int n, pos = 0, neg = 0, zero = 0, i = 0;
    cout << "Enter number of numbers: ";
    cin >> n;
    do
    {
        int a;
        cout << "Enter number (" << i + 1 << "): ";
        cin >> a;
        if (a > 0)
        {
            pos++;
        }
        else if (a < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
        i++;
    } while (i < n);
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    cout << "Zero: " << zero << endl;
    return 0;
}