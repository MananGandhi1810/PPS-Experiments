// Armstrong number between n1 and n2
#include <iostream>

using namespace std;
int main()
{
    int n1, n2, i;
    cout << "Enter n1 and n2: ";
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << "Invalid";
        return 0;
    }
    for (i = n1; i <= n2; i++)
    {
        int n, original, sum = 0, digits = 0;
        original = n = i;
        while (n > 0)
        {
            digits++;
            n /= 10;
        }
        n = original;
        while (n > 0)
        {
            sum += pow(n % 10, digits);
            n /= 10;
        }
        if (sum == original)
        {
            cout << i << " is an Armstrong number" << endl;
        }
    }
}