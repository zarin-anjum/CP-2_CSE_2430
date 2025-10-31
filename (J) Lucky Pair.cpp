#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int mn = *min_element(a.begin(), a.end());
    int freq = count(a.begin(), a.end(), mn);
    cout << (freq % 2 ? "Lucky" : "Unlucky");
}
