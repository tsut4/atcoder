#include <iostream>
using namespace std;

int N;
int A[109];
bool Answer = false;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    for (int x = 1; x <= N; x++) {
        for (int y = x + 1; y <= N; y++) {
            for (int z = y + 1; z <= N; z++) {
                if (A[x] + A[y] + A[z] == 1000) {
                    Answer = true;
                    break; // 条件が成立したらループを終了
                }
            }
            if (Answer) break; // 内側のループを終了
        }
        if (Answer) break; // 外側のループを終了
    }

    if (Answer) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
