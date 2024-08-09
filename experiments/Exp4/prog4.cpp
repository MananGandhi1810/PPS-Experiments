/*
Write a program that prints the first n Fibonacci numbers using a for loop
*/
#include <iostream>

using namespace std;
int main()
{
    int n, a = 0, b = 1;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << a << "\t";
        int temp = a;
        a = b;
        b += temp;
    }
    cout << endl;
    return 0;
}