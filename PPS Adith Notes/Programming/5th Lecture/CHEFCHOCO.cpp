#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int C, X, Y;
        cin >> C >> X >> Y;
        cout << ((C - X) * Y) << endl;
    }
    return 0;
}