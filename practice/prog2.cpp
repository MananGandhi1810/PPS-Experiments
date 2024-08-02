/*
Print number of even and odd numbers between 2 numbers
*/
#include <iostream>

using namespace std;
int main()
{
    int n, m, odd = 0, even = 0;
    cout << "Enter start and end values: ";
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        if (i % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
}