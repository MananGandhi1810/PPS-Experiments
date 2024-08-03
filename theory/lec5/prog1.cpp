#include <iostream>

using namespace std;

int sum(int, int);
int main()
{
    int a = 0, b = 0;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    cout << "Sum: " << sum(a, b) << endl;
    return 0;
}

int sum(int a, int b)
{
    int total = a + b;
    return total;
}