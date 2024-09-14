// Implement a program using user defined function to return largest of 3 numbers
#include <iostream>
using namespace std;

int largest(int, int, int);
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    int res = largest(a, b, c);
    cout << "Largest: " << res << endl;
    return 0;
}

int largest(int a, int b, int c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}