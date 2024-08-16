/*
    *
   ***
  *****
 *******
*********
*/
#include <iostream>

using namespace std;
int main()
{
    int i = 0, j = 0, k = 0, n;
    cout << "Enter n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < n-i+1; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= (2 * i) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}