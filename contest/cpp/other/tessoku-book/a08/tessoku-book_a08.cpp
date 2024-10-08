#include <iostream>
using namespace std;

int main() {
    int H, W, Q;
    int X[1509][1509];
    int A[100009], B[100009], C[100009], D[100009];
    int Z[1509][1509];

    cin >> H >> W;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) cin >> X[i][j];
    }
    cin >> Q;
    for (int i = 1; i <= Q; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) Z[i][j] = 0;
    }
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) Z[i][j] = Z[i][j - 1] + X[i][j];
    }
    for (int j = 1; j <= W; j++) {
        for (int i = 1; i <= H; i++) Z[i][j] = Z[i - 1][j] + Z[i][j];
    }

    for (int i = 1; i <= Q; i++) {
        cout << Z[C[i]][D[i]] + Z[A[i] - 1][B[i] - 1] - Z[A[i] - 1][D[i]] - Z[C[i]][B[i] - 1] << endl;
    }
    return 0;
}