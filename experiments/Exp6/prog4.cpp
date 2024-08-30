// WAP to copy one array into another array in reverse order.
#include <iostream>

using namespace std;
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  int arr[n], reverse[n];
  cout << "Enter elements: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Element " << i + 1 << ": ";
    cin >> arr[i];
  }
  for (int i = n; i > 0; i--)
  {
    reverse[n - i] = arr[i-1];
  }
  for (int i = 0; i < n; i++)
  {
    cout << reverse[i] << endl;
  }
  return 0;
}