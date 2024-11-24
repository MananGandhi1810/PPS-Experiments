// write output in following format input:Ram Lal mishra output:R L mishra or input:Rajesh Singh output :R singh

#include <iostream>
using namespace std;

int main()
{
    string s = "Manan Jigam Gandhi";
    string res = "";
    int i = s.size();
    bool flag = false;
    while (i != 0)
    {
        if (!flag)
        {
            res = s[i] + res;
        }
        if (s[i] == ' ' && !flag)
        {
            flag = true;
        }
        else if (flag && s[i] == ' ')
        {
            res = s[i + 1] + res;
            res = " " + res;
        }
        i--;
    }
    res = s[0] + res;
    cout << res << endl;
}