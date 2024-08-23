// 2Sum
#include <iostream>

using namespace std;
int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": ";
        cin >> arr[i];
    }
    int target = 0;
    cout << "Enter target: ";
    cin >> target;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (found)
            break;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] + arr[j] == target)
            {
                cout << arr[i] << " " << arr[j] << endl;
                found = true;
                break;
            }
        }
    }
    if (!found)
    {
        cout << "Not Found" << endl;
    }
    return 0;
}