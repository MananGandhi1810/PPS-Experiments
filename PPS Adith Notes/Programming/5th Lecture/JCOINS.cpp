#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << ((X * 10) + (Y * 5)) << endl;
    }
    return 0;
}