/*
You are given an integer N.
Consider the sequence containing the integers 1,2,…,N in increasing order (each exactly once).
Find the maximum length of its contiguous subsequence with an even sum.
*/
#include <iostream>

using namespace std;
int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0, len = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    if (sum % 2 == 0)
    {
        len = n;
    }
    else
    {
        len = n - 1;
    }
    cout << len << endl;
    return 0;
}