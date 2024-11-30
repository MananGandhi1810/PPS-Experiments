#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter s1: ";
    cin >> s1;
    cout << "Enter s2: ";
    cin >> s2;
    int l1 = 0, l2 = 0;
    while (s1[l1] != '\0')
    {
        l1++;
    }
    while (s2[l2] != '\0')
    {
        l2++;
    }
    cout << "Length of s1: " << l1 << endl;
    cout << "Length of s2: " << l2 << endl;
    char res[l1 + l2];
    for (int i = 0; i < l1; i++)
    {
        res[i] = s1[i];
    }
    for (int i = 0; i < l2; i++)
    {
        res[l1 + i] = s2[i];
    }
    cout << "Concatenated: " << res << endl;
    return 0;
}