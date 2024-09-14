// WAP to find reverse of a string using pointer
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    char s[n];
    cout << "Enter a string: ";
    cin >> s;
    char *ptr = s;
    while (*ptr != '\0')
    {
        ptr++;
    }
    ptr--;
    cout << "The string in reverse order is: ";
    while (ptr >= s)
    {
        cout << *ptr;
        ptr--;
    }
    cout << endl;
    return 0;
}