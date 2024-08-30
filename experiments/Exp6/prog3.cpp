// Implement a program to find the intersection of two arrays
#include <iostream>

using namespace std;
int main()
{
  int n1, n2;
  cout << "Enter number of elements in array 1: ";
  cin >> n1;
  cout << "Enter number of elements in array 2: ";
  cin >> n2;
  int result_count = 0;
  int arr1[n1], arr2[n2], result[n1 + n2];
  cout << "Enter elements for array 1: " << endl;
  for (int i = 0; i < n1; i++)
  {
    cout << "Element " << i + 1 << ": ";
    cin >> arr1[i];
  }
  cout << "Enter elements for array 2: " << endl;
  for (int i = 0; i < n2; i++)
  {
    cout << "Element " << i + 1 << ": ";
    cin >> arr2[i];
  }
  for (int i = 0; i < n1; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      if (arr1[i] == arr2[j])
      {
        result[result_count++] = arr1[i];
        break;
      }
    }
  }
  for (int i = 0; i < result_count; i++)
  {
    cout << result[i] << "\t";
  }
  cout << endl;
  return 0;
}