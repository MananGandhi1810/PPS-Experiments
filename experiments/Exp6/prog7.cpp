// Develop a program to find sum of elements of lower triangular matrix of order MxN.
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
    for (int j = 0; j <= i; j++)
    {
      if (j < n)
      {
        sum += arr[i][j];
      }
    }
  }
  cout << "Sum: " << sum << endl;
  return 0;
}