/*
A
BC
DEF
GHIJ
KLMNO
*/
#include <iostream>

using namespace std;
int main()
{
    int i = 0, j = 0, n;
    char c = 'A';
    cout << "Enter n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
    return 0;
}