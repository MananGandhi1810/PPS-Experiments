#include <iostream>
using namespace std;

int sum(int, int, int = 0);

int main()
{
    int a, b, c, choice, res;
    cout << "1. 2 numbers" << endl
         << "2. 3 numbers" << endl
         << "Enter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter 2 numbers: ";
        cin >> a >> b;
        res = sum(a, b);
        break;

    case 2:
        cout << "Enter 3 numbers: ";
        cin >> a >> b >> c;
        res = sum(a, b, c);
        break;

    default:
        break;
    }
    cout << "Result: " << res << endl;
    return 0;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}