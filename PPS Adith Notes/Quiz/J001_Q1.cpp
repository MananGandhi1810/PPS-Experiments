#include <iostream>

using namespace std;

int main() {
    char alphabet[9][6] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };
    int a, b;
    cin >> a;
    cin >> b;
    for (int n = a; n <= b; n++) {
        if (1 <= n && n <= 9) {
            cout << alphabet[n - 1];
        } else if (n % 2 == 0) {
            cout << "even";
        } else {
            cout << "odd";
        }
        cout << endl;
    }
    return 0;
}
