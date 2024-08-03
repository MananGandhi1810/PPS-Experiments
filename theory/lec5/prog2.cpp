/*
Dharam and his friend Aryan is standing on the x axis at the point x1 and x2 respectively.
Dharam moves 1 step forward each second, whereas Aryan moves 2 steps forward each second.
You need to determine if Dharam will be able to meet his friend Aryan or not.
You can assume that Dharam and Aryan both keep moving for a long infinite amount of time simultaneously.
Input: 7 1
Output: Yes
*/
#include <iostream>

using namespace std;

bool calculate(int, int);
int main()
{
    int x1 = 0, x2 = 0;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter x2: ";
    cin >> x2;
    bool willMeet = calculate(x1, x2);
    if (willMeet)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

bool calculate(int x1, int x2)
{
    int second = 0;
    while (true)
    {
        if (x1 == x2)
        {
            cout << second << " seconds" << endl;
            return true;
        }
        else if (x1 < x2)
        {
            return false;
        }
        second++;
        x1++;
        x2 += 2;
    }
}
