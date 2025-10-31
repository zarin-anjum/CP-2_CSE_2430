#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long a = 0, b = 1;
    if (n == 1) cout << 0;
    else if (n == 2) cout << 1;
    else {
        for (int i = 3; i <= n; i++) {
            long long c = a + b;
            a = b;
            b = c;
        }
        cout << b;
    }
}

