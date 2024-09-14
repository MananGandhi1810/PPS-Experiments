#include <iostream>

using namespace std;
void add(int *);

int main()
{
    int n = 5;
    add(&n);
    cout << n << endl;
    return 0;
}

void add(int *n)
{
    (*n)++;
}