// WAP to copy one string to another using pointer and display copied string-using pointer.
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    char original_string[n];
    cout << "Enter string: ";
    cin >> original_string;
    char *ptr = original_string;
    char res[n];
    for (int i = 0; i < n; i++)
    {
        res[i] = *ptr;
        ptr++;
    }
    cout << "Result: " << res << endl;
    return 0;
}