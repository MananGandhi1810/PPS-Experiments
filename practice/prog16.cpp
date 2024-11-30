#include <iostream>
using namespace std;

string bin(int n)
{
    if (n == 0)
    {
        return "";
    }
    return bin(n / 2) + (n % 2 == 0 ? "0" : "1");
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Binary: " << bin(n) << endl;
    return 0;
}