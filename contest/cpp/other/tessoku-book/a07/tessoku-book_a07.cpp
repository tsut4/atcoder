#include <iostream>
using namespace std;

int main() {
    int D, N;
    int L[100009], R[100009], A[100009];
    int B[100009];
    int Answer[100009];

    cin >> D >> N;
    for (int i = 1; i <= D; i++) cin >> L[i] >> R[i];

    for (int i = 1; i <= N; i++) {
        B[L[i]] += 1;
        B[R[i] + 1] -=1;
    }
    Answer[0] = 0;
    for (int d = 1; d <= D; d++) Answer[d] = Answer[d - 1] + B[d]
    for (int d = 1; d <= D; d++) cout << Answer[d] << endl;
}