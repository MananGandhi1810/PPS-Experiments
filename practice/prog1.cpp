/*
Lowercase to uppercase and uppercase to lowercase
*/
#include <iostream>

using namespace std;
int main()
{
    char s[100], res[100];
    int i = 0;
    cout << "Enter a string: ";
    cin >> s;
    while (s[i] != '\0')
    {
        if ((int)s[i] >= 65 && (int)s[i] <= 90)
        {
            res[i] = s[i] + 32;
        }
        else if ((int)s[i] >= 97 && (int)s[i] <= 122)
        {
            res[i] = s[i] - 32;
        }
        i++;
    }
    cout << "New string: " << res << endl;
    return 0;
}