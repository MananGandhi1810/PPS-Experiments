/*

Rahul wants to appear in a competitive exam. To take the exam, there are following requirements:
Minimum age limit is X (i.e. Age should be greater than or equal to X).
Age should be strictly less than Y.
Rahul's current Age is A.
Find whether he is currently eligible to take the exam or not.
*/

#include <iostream>

using namespace std;
int main()
{
    int x, y, a;
    cout << "Enter minimum age: ";
    cin >> x;
    cout << "Enter maximum age: ";
    cin >> y;
    cout << "Enter Vedant's age: ";
    cin >> a;

    if (a >= x && a < y)
    {
        cout << "Eligible";
    }
    else
    {
        cout << "Ineligible";
    }
    cout << endl;
    return 0;
}