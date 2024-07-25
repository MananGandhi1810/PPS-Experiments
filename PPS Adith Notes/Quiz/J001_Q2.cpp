#include <iostream>
using namespace std;

int main() {
  int len_arr;
  cin >> len_arr;
  int arr[len_arr];
  for (int i = 0; i < len_arr; i++) {
    cin >> arr[i];
  }
  for (int i = len_arr - 1; i >= 0; i--) {
    cout << arr[i] << " ";
  }
  return 0;
}