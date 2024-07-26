/*
Rashi is a fan of pairs and she likes things in pairs.
She even has a doll collection in which the dolls come in pairs.
One day while going through her doll collection she found that there are odd number of dolls. Someone had stolen a doll.
Help Rashi find which type of doll is missing.
Input:
3
1
2
1
Output: 2
*/
#include <iostream>

using namespace std;
int main()
{
    int t = 0;
    int n = 0;
    while (n % 2 == 0)
    {
        cout << "Enter number of dolls: ";
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "Invalid number, number of dolls should be odd" << endl;
        }
    }
    int dolls[n], singles[n];
    int count = 0;
    cout << "Enter dolls: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> dolls[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (dolls[i] == dolls[j] && i != j)
            {
                found = true;
            }
        }
        if (!found)
        {
            singles[count] = i;
            count++;
        }
    }
    cout << "Dolls missing:" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << dolls[singles[i]] << endl;
    }
    return 0;
}