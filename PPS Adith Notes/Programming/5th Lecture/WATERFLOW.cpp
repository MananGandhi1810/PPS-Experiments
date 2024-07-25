#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int W, X, Y, Z, T;
        cin >> W >> X >> Y >> Z;
        T = W + (Y * Z);
        if(T < X) {
            cout << "unfilled\n";
        }
        else if(T > X) {
            cout << "overflow\n";
        }
        else {
            cout << "filled\n";
        }
    }
    return 0;
}