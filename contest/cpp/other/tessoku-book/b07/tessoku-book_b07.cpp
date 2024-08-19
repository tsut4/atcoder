#include <iostream>
using namespace std;

int main() {
    int T, N;
    int L[500009], R[500009], B[500009];
    int Answer[500009];

    cin >> T >> N;
    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];
    
    for (int i = 1; i <= N; i++) {
        B[L[i]] += 1;
        B[R[i]] -= 1;
    }
    Answer[0] = 0;
    for (int t = 0; t <= T - 1; t++) Answer[t + 1] = Answer[t] + B[t];
    for (int t = 1; t <= T; t++) cout << Answer[t] << endl;
    return 0;
}