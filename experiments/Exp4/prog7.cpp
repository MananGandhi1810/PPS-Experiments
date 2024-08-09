/*
Write a program to check whether the entered number is prime or not. Make use of break statement
*/
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    bool prime = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Composite" << endl;
    }
    return 0;
}