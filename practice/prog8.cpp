// Recursion
#include <iostream>

using namespace std;

void combinations(string s, int l, int r)
{
    cout << l << " " << r << endl;
    if (l == r)
    {
        cout << "Final Answer: " << s << endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            char temp = ' ';
            temp = s[l];
            s[l] = s[i];
            s[i] = temp;

            cout << "In Loop 1: " << s << endl;
            combinations(s, l + 1, r);

            temp = s[l];
            s[l] = s[i];
            s[i] = temp;
            cout << "In Loop 2: " << s << endl;
        }
    }
}

int main()
{
    combinations("ABC", 0, 2);
    return 0;
}