/*
Vedant wants to appear in a competitive exam. To take the exam there are the following requirements:
* Minimum age limit is x
* Age should be strictly less than y
* Vedant's current age is a
Find whether he can give the exam
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