#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int A[100000];
    int freq[100001] = {0};

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        freq[A[i]]++;
    }

    for (int i = 1; i <= M; i++) {
        cout << freq[i] << endl;
    }

    return 0;
}
