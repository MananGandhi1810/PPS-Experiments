// Write a program to exchange values of two variables without using 3rd variable
#include <iostream>

using namespace std;
int main()
{
    int n1 = 0, n2 = 0;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;
    n2 = n1 + n2;
    n1 = n2 - n1;
    n2 = n2 - n1;
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    return 0;
}