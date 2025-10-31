#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    int cnt = 0;
    while (all_of(a.begin(), a.end(), [](long long x){ return x % 2 == 0; })) {
        for (auto &x : a) x /= 2;
        cnt++;
    }
    cout << cnt;
}
