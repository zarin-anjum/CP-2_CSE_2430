#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int minIdx = min_element(a.begin(), a.end()) - a.begin();
    int maxIdx = max_element(a.begin(), a.end()) - a.begin();
    swap(a[minIdx], a[maxIdx]);
    for (int x : a) cout << x << " ";
}

