#include <iostream>
using namespace std;

int N, K;
int P[109], Q[109];
bool Answer = false;

int main() {

    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> P[i] >> Q[i];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (P[i] + Q[j] == K) Answer = true;
        }
    }
    if (Answer == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
