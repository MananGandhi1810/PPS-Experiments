// Implement a program to find the largest element in matrix of order 3X3.
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
  int max = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (max < arr[i][j])
      {
        max = arr[i][j];
      }
    }
  }
  cout << "Max: " << max << endl;
  return 0;
}