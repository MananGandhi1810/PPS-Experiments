// Write a user defined function search_element to check if element is present in 1D array
#include <iostream>
using namespace std;

int search_element(int[], int, int);
int main()
{
    int n, element;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> element;
    bool found = search_element(arr, element, n);
    if (found)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}

int search_element(int arr[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }
    return false;
}