/*
Given a sorted array, give the start and end index of the target element
example - [1,2,2,3,3,4,4,4,5,6]
target = 4
output = [5,7]
*/
#include <iostream>

using namespace std;
int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    int start = 0, end = n - 1;
    while ((arr[start] != target || arr[end] != target) && (start < end))
    {
        if (arr[start] != target)
        {
            start++;
        }
        if (arr[end] != target)
        {
            end--;
        }
    }
    if (arr[start]==target)
    {
        cout << "Start: " << start << ", End: " << end << endl;
    }
    else
    {
        cout << "[-1, -1]" << endl;
    }
    return 0;
}