#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, sum, matches = 0;
        cin >> A >> B;
        sum = A + B;
        while(sum != 0) {
            int digit;
            digit = sum % 10;
            sum /= 10;
            if(digit == 8) {
                matches +=  7;
            }
            else if(digit == 0 || digit == 6 || digit == 9) {
                matches += 6;
            }
            else if(digit == 2 || digit == 3 || digit == 5) {
                matches += 5;
            }
            else if(digit == 4) {
                matches += 4;
            }
            else if(digit == 7) {
                matches += 3;
            }
            else if(digit == 1) {
                matches += 2;
            }
        }
        cout << matches << endl;
    }
    return 0;
}