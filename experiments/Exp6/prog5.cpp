// Create a program to exchange first and last element of the 1D array of size N.
#include <iostream>

using namespace std;
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Element " << i + 1 << ": ";
    cin >> arr[i];
  }
  int temp = 0;
  temp = arr[0];
  arr[0] = arr[n - 1];
  arr[n - 1] = temp;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}