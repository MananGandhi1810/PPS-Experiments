/*
Pythagorean Triplets between 100 to 1000
*/
#include <iostream>

using namespace std;
int root(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if ((long long)(i * i) == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int m = 100, n = 1000;
    for (int i = m; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int c = root((i * i) + (j * j));
            if (c != -1 && c >= m && c <= n)
            {
                cout << i << " " << j << " " << c << endl;
            }
        }
    }
    return 0;
}