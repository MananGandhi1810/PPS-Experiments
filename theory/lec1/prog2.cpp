// Assume that Aashna and Mahek are playing a dice game, in one turn each one of them rolls a dice. A turn is said to be good if the sum of 2 numbers on the dice is greater than 6. Find whether the particular turn is good or bad.

#include <iostream>

using namespace std;

int main()
{
    unsigned short int d1 = 0, d2 = 0;
    start:
    cout << "Enter space separated values: ";
    cin >> d1 >> d2;
    cout << &d1 << "  " << &d2 << endl;
    if ((d1 > 6 || d1 < 1) || (d2 > 6 || d2 < 1))
    {
        cout << "Values cannot be more than 6 or less than 1" << endl;
        goto start;
    }
    if (d1 + d2 > 6)
    {
        cout << "The turn is a good turn" << endl;
    }
    else
    {
        cout << "The turn is a bad turn" << endl;
    }
    return 0;
}