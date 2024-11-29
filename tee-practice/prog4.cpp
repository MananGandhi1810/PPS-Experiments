// N fibonacci numbers
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1;
    int c;
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << a << " ";
            continue;
        }
        if (i == 2)
        {
            cout << b << " ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    return 0;
}