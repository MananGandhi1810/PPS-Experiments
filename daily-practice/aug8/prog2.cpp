/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
*/
#include <iostream>

using namespace std;
int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Invalid number of elements" << endl;
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Element " << i + 1 << " - " << arr[i] << " was not found" << endl;
            break;
        }
    }
    return 0;
}