#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;
        W = W + ((X - Y) * Z);
        cout << W << endl;
    }
    return 0;
}