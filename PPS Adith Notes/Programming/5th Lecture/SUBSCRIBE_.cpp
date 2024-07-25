#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        float N, X;
        cin >> N >> X;
        cout << (X * ceil(N/6)) << endl;
    }
    return 0;
}