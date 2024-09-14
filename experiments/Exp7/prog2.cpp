// Write a function that takes 2 integer params x and y and returns x^y without pow()
#include <iostream>
using namespace std;

int power(int, int);
int main()
{
    int x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;
    cout << power(x, y) << endl;
    return 0;
}

int power(int x, int y)
{
    int res = 1;
    for (int i = 0; i < y; i++)
    {
        res *= x;
    }
    return res;
}