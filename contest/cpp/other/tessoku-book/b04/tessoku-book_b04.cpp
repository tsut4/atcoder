#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;

    int Answer = 0;
    for (int i = 0; i < N.size(); i++) {
        int keta;
        int kurai = (1 << (N.size() - 1 - i));
        if (N[i] == '0') keta = 0;
        if (N[i] == '1') keta = 1;
        Answer += keta * kurai;
    }
    cout << Answer << endl;
    return 0;
}