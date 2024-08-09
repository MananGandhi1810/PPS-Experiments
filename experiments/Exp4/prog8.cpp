/*
Write a program to print all uppercase and lowercase characters using a loop, use continue
*/
#include <iostream>

using namespace std;
int main()
{
    for (int i = 65; i <= 122; i++)
    {
        if (i >= 91 && i <= 96)
        {
            continue;
        }
        cout << (char)i << endl;
    }
    return 0;
}