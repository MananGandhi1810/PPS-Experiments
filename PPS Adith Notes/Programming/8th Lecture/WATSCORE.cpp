#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, score = 0, arrPi[11] = {0};
        cin >> N;
        while (N--) {
            int Pi, Si;
            cin >> Pi >> Si;
            if(arrPi[Pi - 1] < Si) {
                arrPi[Pi - 1] = Si;
            }
        }
        for(int i = 0; i < 8; i++) {
            score += arrPi[i];
        }
        cout << score << endl;
    }
    return 0;
}