/*
Sahil and his friend Dev is standing on the X-axis at the points X1 and X2 respectively.
Sahil moves one step forward each second (that is he moves to X1+1 after the 1st second, X1+2 after the 2nd second, and so on),
whereas his friend Dev moves 2 steps forward each second (that is he moves to X2+2 after the 1st second, X2+4 after the 2nd second, and so on).
You need to determine if Sahil will be able to meet his friend Dev or not.
You can assume that Sahil and his friend Dev both keep on moving for a long indefinite amount of time and also that they move simultaneously.
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
