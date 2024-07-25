#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int I[N];
        for (int i = 0; i < N; i++) {
            cin >> I[i];
        }
        int M = 0;
        sort(I, I + N);
        for (int i = 0; i < N - 1; i++) {
            if (I[i] != I[i + 1]) {
                M++;
            }
        }
        cout << M + 1 << endl;
    }
    return 0;
}