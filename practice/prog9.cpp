// Series
#include <iostream>

using namespace std;

float factorial(int n)
{
    float fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    float x, n;
    float res = 0;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;
    int numerator = 1;
    int denominator = 1;
    for (int i = 0; i < n; i++)
    {
        numerator *= x;
        denominator *= 2;
        if (i % 2 == 0)
        {
            res += numerator / factorial(denominator);
        }
        else
        {
            res -= numerator / factorial(denominator);
        }
    }
    cout << res << endl;
    return 0;
}