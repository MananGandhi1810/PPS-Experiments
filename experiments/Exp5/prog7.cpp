/*
*   *
 * *
  *
 * *
*   * 
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
        for (j = 1; j <= n; j++)
        {
            if (j == i || j == n - i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}