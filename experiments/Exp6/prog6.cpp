// Develop a program to perform sum of elements of matrix (2D array) of order MXN.
#include <iostream>

using namespace std;
int main()
{
  int m, n;
  cout << "Enter m and n: ";
  cin >> m >> n;
  int arr[m][n];
  cout << "Enter elements: " << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Arr[" << i << "][" << j << "]: ";
      cin >> arr[i][j];
    }
  }
  int sum = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      sum += arr[i][j];
    }
  }
  cout << "Sum: " << sum << endl;
  return 0;
}