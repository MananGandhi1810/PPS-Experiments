// Prime numbers between n1 and n2
#include <iostream>

using namespace std;
int main()
{
    int n1, n2, i, j;
    bool found = false;
    cout << "Enter n1 and n2: ";
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << "Invalid";
        return 0;
    }
    for (i = n1; i <= n2; i++)
    {
        found = false;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << i << " is a Prime number" << endl;
        }
    }
    return 0;
}