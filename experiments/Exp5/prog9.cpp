/*
1
12
123
1234
123
12
1
*/
#include <iostream>

using namespace std;
int main()
{
    int i = 0, j = 0, n;
    cout << "Enter n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}