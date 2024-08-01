/*
Saif and Kareena are playing with dice. In one turn, both of them roll their dice at once.
They consider a turn to be good if the sum of the numbers on their dice is greater than 6.
Given that in a particular turn Saif and Kareena got X and Y on their respective dice, find whether the turn was good.
*/

#include <iostream>

using namespace std;

int main()
{
    unsigned short int d1 = 0, d2 = 0;
start:
    cout << "Enter space separated values: ";
    cin >> d1 >> d2;
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