#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        if(X * 3 < Y * 2) {
            cout << (X * 3) << endl;
        }
        else{
            cout << (Y * 2) << endl;
        }
    }
    return 0;
}