#include <iostream>

using namespace std;
int main()
{
  int n = 1000;
  int *p = &n;
  cout << n << endl;
  cout << p << endl;
  cout << *p << endl;
  cout << &p << endl;
  return 0;
}