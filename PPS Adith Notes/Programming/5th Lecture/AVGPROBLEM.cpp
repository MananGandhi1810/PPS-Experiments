#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        float A, B, C;
        cin >> A >> B >> C;
        if (((A+B)/2) > C) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}