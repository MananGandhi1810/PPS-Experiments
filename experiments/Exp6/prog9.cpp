// Write a program to perform multiplication of two matrix of order mXn and pXq and display the resultant matrix.
#include <iostream>

using namespace std;
int main()
{
  int m, n;
  cout << "Enter m and n: ";
  cin >> m >> n;
  int arr1[m][n];
  cout << "Enter elements: " << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Arr1[" << i << "][" << j << "]: ";
      cin >> arr1[i][j];
    }
  }
  int p, q;
  cout << "Enter p and q: ";
  cin >> p >> q;
  int arr2[p][q];
  cout << "Enter elements: " << endl;
  for (int i = 0; i < p; i++)
  {
    for (int j = 0; j < q; j++)
    {
      cout << "Arr2[" << i << "][" << j << "]: ";
      cin >> arr2[i][j];
    }
  }
  if (n != p)
  {
    cout << "Multiplication not possible" << endl;
    return 0;
  }
  int res[m][q];
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < q; j++)
    {
      res[i][j] = 0;
      for (int k = 0; k < n; k++)
      {
        res[i][j] += arr1[i][k] * arr2[k][j];
      }
    }
  }
  cout << "Resultant matrix: " << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < q; j++)
    {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}