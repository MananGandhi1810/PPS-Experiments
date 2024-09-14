// WAP to print 1D array of size N using pointer
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *ptr = arr;
    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    return 0;
}