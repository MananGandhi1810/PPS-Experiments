/*
*****
*   *
*   *
*****
*/
#include <iostream>

using namespace std;
int main()
{
    int i = 0, j = 0, m = 0, n = 0;
    cout << "Enter m and n: ";
    cin >> m >> n;
    for (i = 1; i <= m; i++)
    {
        cout << "*";
        for (j = 1; j <= n - 2; j++)
        {
            if (i == 1 || i == m)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "*" << endl;
    }
    return 0;
}