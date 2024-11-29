/*
        A
      B C
    D E F
  G H I J
K L M N O
*/
#include <iostream>
using namespace std;

int main()
{
    char c = 'A';
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}