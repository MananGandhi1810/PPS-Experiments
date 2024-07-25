#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int Na, Nb, Nc;
        cin >> Na >> Nb >> Nc;
        if((Nc > (Na + Nb)) || (Na > (Nb + Nc)) || (Nb > (Na + Nc)) ){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}