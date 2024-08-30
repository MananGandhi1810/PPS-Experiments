// Write a program to count and display number of odd & even elements from an array (1D) separately.
#include <iostream>

using namespace std;
int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements: " << endl;
  int odd = 0, even = 0;
  int odd_arr[n], even_arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Element " << i + 1 << ": ";
    cin >> arr[i];
    if (arr[i] % 2 == 1)
    {
      odd_arr[odd++] = arr[i];
    }
    else
    {
      even_arr[even++] = arr[i];
    }
  }
  cout << "Even: " << even << endl;
  for (int i = 0; i < even; i++)
  {
    cout << even_arr[i] << "\t";
  }
  cout << endl;
  cout << "Odd: " << odd << endl;
  for (int i = 0; i < odd; i++)
  {
    cout << odd_arr[i] << "\t";
  }
  cout << endl;
  return 0;
}