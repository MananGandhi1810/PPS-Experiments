#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        if (X/10 > 100) {
            cout << X/10 << endl;
        }
        else {
            cout << 100 << endl;
        }
    }
    return 0;
}