/*
Implement a program to print all Leap Years from 1 to N using C++ program.(Using -for)
*/
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 4 == 0 && !(i % 100 == 0 && i % 400 != 0))
        {
            cout << i << endl;
        }
    }
    return 0;
}