#include <iostream>

using namespace std;
int main() {
  int k;
  cout << "Enter the Number: ";
  cin >> k;

  while (true) {
    k++;
    int r, temp = k, k1 = k, sum = 0;
    while (k1 > 0) {
      r = k1 % 10;
      sum = (sum * 10) + r;
      k1 = k1 / 10;
    }

    if (temp == sum) {
      cout << "\nThe nearest Palindrome is " << sum << endl;
      break;
    }
  }

  return 0;
}