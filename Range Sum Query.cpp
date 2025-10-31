#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    long long A[100000];
    long long prefix[100001];

    prefix[0] = 0;

    for (int i = 1; i <= N; i++) {
        cin >> A[i-1];
        prefix[i] = prefix[i-1] + A[i-1];
    }

    for (int q = 0; q < Q; q++) {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] - prefix[L-1] << endl;
    }

    return 0;
}

