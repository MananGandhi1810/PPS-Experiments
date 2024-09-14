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
    char res[n];
    int i = 0;
    while (ptr >= s)
    {
        res[i++] = *ptr;
        ptr--;
    }
    if (strcmp(s, res) == 0)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}