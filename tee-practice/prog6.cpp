#include <iostream>
using namespace std;

void f(int *ptr)
{
    *ptr = 30;
}

int main()
{
    int x = 0;
    f(&x);
    cout << x << endl;
    return 0;
}