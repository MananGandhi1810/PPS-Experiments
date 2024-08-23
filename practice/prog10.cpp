// Generate Parenthesis
#include <bits/stdc++.h>

using namespace std;
bool isValid(string s)
{
    long long int balanced = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '(')
        {
            balanced++;
        }
        else if (s[i] == ')')
        {
            if (balanced == 0)
            {
                return false;
            }
            balanced--;
        }
        i++;
    }
    return balanced == 0;
}
void generate(string &s, int l, int r, vector<string> &output)
{
    if (l == r)
    {
        if (isValid(s))
        {
            bool exists = false;
            for (int i = 0; i < output.size(); i++)
            {
                if (output[i] == s)
                {
                    exists = true;
                }
            }
            if (!exists)
            {
                output.push_back(s);
            }
        }
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            char temp = ' ';
            temp = s[l];
            s[l] = s[i];
            s[i] = temp;

            generate(s, l + 1, r, output);

            temp = s[l];
            s[l] = s[i];
            s[i] = temp;
        }
    }
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    string braces = "";
    vector<string> output = {};
    for (int i = 0; i < n; i++)
    {
        braces += "()";
    }
    generate(braces, 0, braces.size() - 1, output);
    cout << output;
    return 0;
}