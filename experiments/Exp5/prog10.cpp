/*
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
1 5 10 10 5 1
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
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int val = 1;
        for (j = 1; j <= i; j++)
        {
            cout << val << " ";
            val = val * (i - j) / j;
        }
        cout << endl;
    }
}