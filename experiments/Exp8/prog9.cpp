// WAP to find the number of vowels in entered string using pointer [eg - i/p India o/p -> A-1, E-0, I-2, O-0, U-0]
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
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    for (int i = 0; i < n; i++)
    {
        switch (*ptr)
        {
        case 'a':
        case 'A':
            a++;
            break;
        case 'e':
        case 'E':
            e++;
            break;
        case 'i':
        case 'I':
            i++;
            break;
        case 'o':
        case 'O':
            o++;
            break;
        case 'u':
        case 'U':
            u++;
            break;
        default:
            break;
        }
        ptr++;
    }
    cout << "A: " << a << endl
         << "E: " << e << endl
         << "I: " << i << endl
         << "O: " << o << endl
         << "U: " << u << endl;
    return 0;
}