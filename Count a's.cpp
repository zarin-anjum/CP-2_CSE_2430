#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;

    int n = s.length();
    int prefix[100001];
    prefix[0] = 0;

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + (s[i-1] == 'a' ? 1 : 0);
    }

    while (q--) {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] - prefix[L-1] << endl;
    }

    return 0;
}
